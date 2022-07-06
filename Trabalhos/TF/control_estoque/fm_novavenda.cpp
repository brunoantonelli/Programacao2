#include "fm_novavenda.h"
#include "ui_fm_novavenda.h"
#include <QDebug>

fm_novaVenda::fm_novaVenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_novaVenda)
{
    ui->setupUi(this);

    //abrir e verificar conexao com o banco de dados
   if(!con.aberto())
   {
     if(!con.abrir())
       {
         QMessageBox::critical(this,"ERROR","Erro ao abir banco de dados");
       }
   }
    //formatar TableWidget
     ui->tw_listaprodutos->setColumnCount(5);
     ui->tw_listaprodutos->setColumnWidth(0,100);
     ui->tw_listaprodutos->setColumnWidth(1,200);
     ui->tw_listaprodutos->setColumnWidth(2,100);
     ui->tw_listaprodutos->setColumnWidth(3,100);
     ui->tw_listaprodutos->setColumnWidth(4,100);

     QStringList cabecalhos={"Código","Produto","valor Un.","Qtd","Total"};
     ui->tw_listaprodutos->setHorizontalHeaderLabels(cabecalhos);
     ui->tw_listaprodutos->setStyleSheet("QTableView{selection-background-color:blue;");
     ui->tw_listaprodutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
     ui->tw_listaprodutos->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tw_listaprodutos->verticalHeader()->setVisible(false);

     ui->txt_codprod->setFocus();
     cont_linha=0;
}
fm_novaVenda::~fm_novaVenda()
{
    delete ui;
}

void fm_novaVenda::on_txt_codprod_returnPressed()
{
    QSqlQuery query;
    QString id=ui->txt_codprod->text();
    double valor_total;
  //  query.prepare("select * from tb_produtos where id_produto="+id);

    if(!con.abrir())
      {
        QMessageBox::critical(this,"ERROR","Erro ao abir banco de dados");
      }

    query.exec("select id_produto,produto,valor_venda from tb_produtos where id_produto="+id);
  /*  while(query.next()){


    QString id_produto = query.value(0).toString();
    QString produto = query.value(1).toString();

    qDebug()<<id_produto<<produto;
}*/
 //  if(query.value(0).toString()!="")

  //  {
        if(query.exec())
       {
       query.first();
       ui->tw_listaprodutos->insertRow(cont_linha);
       ui->tw_listaprodutos->setItem(cont_linha,0,new QTableWidgetItem(query.value(0).toString()));
       ui->tw_listaprodutos->setItem(cont_linha,1,new QTableWidgetItem(query.value(1).toString()));
       ui->tw_listaprodutos->setItem(cont_linha,2,new QTableWidgetItem(query.value(2).toString()));
       ui->tw_listaprodutos->setItem(cont_linha,3,new QTableWidgetItem(ui->txt_qtd->text()));
       valor_total=ui->txt_qtd->text().toDouble()*query.value(2).toDouble();
       ui->tw_listaprodutos->setItem(cont_linha,4,new QTableWidgetItem(QString::number(valor_total)));
       ui->tw_listaprodutos->setRowHeight(cont_linha,20);
       cont_linha++;
     ui->lb_totalvendas->setText("R$ "+QString::number(calcula_total(ui->tw_listaprodutos,4)));
       }
        else
        {
          QMessageBox::critical(this,"ERROR","Produto não encontrado");
        }
        resetar_campos();
    }
void fm_novaVenda::resetar_campos()
{
    ui->txt_codprod->clear();
    ui->txt_qtd->setText("1");
    ui->txt_codprod->setFocus();
}

void fm_novaVenda::remover_linhas(QTableWidget *tw)
{
    while(tw->rowCount()>0)
    {
        tw->removeRow(0);
    }
}

double fm_novaVenda::calcula_total(QTableWidget *tw, int coluna)
{
    int total_linhas;
    double total=0;
    total_linhas = tw->rowCount();
    for(int i=0;i<total_linhas;i++)
    {
        total+=tw->item(i,coluna)->text().toDouble();

    }
    return total;
}

void fm_novaVenda::on_btn_excluirprod_clicked()
{
    if(ui->tw_listaprodutos->currentColumn()!=-1)
    {
      QMessageBox::StandardButton opc = QMessageBox::question(this,"Excluir","Tem certeza que deseja excluir o produto?",QMessageBox::Yes|QMessageBox::No);
      if(opc==QMessageBox::Yes)
      {
          ui->tw_listaprodutos->removeColumn(ui->tw_listaprodutos->currentRow());
          ui->lb_totalvendas->setText("R$ "+QString::number(calcula_total(ui->tw_listaprodutos,4)));
          cont_linha--;
      }
    }
    else
    {
        QMessageBox::critical(this,"ERRO","Selecione um produto");
    }
}

void fm_novaVenda::on_pushButton_clicked()
{
    if(ui->tw_listaprodutos->rowCount()>0)
    {
        if(!con.abrir())
          {
            QMessageBox::critical(this,"ERROR","Erro ao abir banco de dados");
          }

        int id_vendas;
        QString msg_fim_venda;
        double total_vendas =calcula_total(ui->tw_listaprodutos,4);
        QString data=QDate::currentDate().toString("dd/MM/yyyy");
        QString hora=QTime::currentTime().toString("hh:mm:ss");
        QSqlQuery query;

        query.prepare("insert into td_vendas(data_venda,hora_venda,valor_total,id_usuario,id_tipo_pagamento) values('"+data+"','"+hora+"',"+QString::number(total_vendas)+","+QString::number(variavel_global::id_usuario)+",1)");

          if(!query.exec())
        {
            QMessageBox::critical(this,"ERRO","Erro ao registrar nova venda");
        }

        else
        {
            query.prepare("select id_venda from td_vendas order by id_venda desc limit 1");
            query.exec();
            query.first();
            id_vendas=query.value(0).toInt();
            msg_fim_venda="ID venda:"+QString::number(id_vendas)+"\nValor total: R$"+QString::number(total_vendas);

            int total_linhas=ui->tw_listaprodutos->rowCount();
            int linha=0;
            while (linha<total_linhas)
            {
                QString prod=ui->tw_listaprodutos->item(linha,1)->text();
                QString qtd=ui->tw_listaprodutos->item(linha,3)->text();
                QString valor_un=ui->tw_listaprodutos->item(linha,2)->text();
                QString valor_total=ui->tw_listaprodutos->item(linha,4)->text();
                query.prepare("insert into tb_produtos_vendas(id_venda,produto,quantidade,valor_un,valor_total) values("+QString::number(id_vendas)+",'"+prod+"',"+qtd+","+valor_un+","+valor_total+")");
                query.exec();
                linha++;

            }

            QMessageBox::information(this,"Venda concluida",msg_fim_venda);
            resetar_campos();
            remover_linhas(ui->tw_listaprodutos);
            ui->lb_totalvendas->setText("R$ 00.00");
        }
    }
    else
    {

        QMessageBox::critical(this,"ERRO","Sem produtos na venda \n Adicione pelo menos um produto");

    }   

}

void fm_novaVenda::on_btn_pesquisar_clicked()
{
     fm_pesquisar_produto pesquisar_produto;
     pesquisar_produto.exec();
}
