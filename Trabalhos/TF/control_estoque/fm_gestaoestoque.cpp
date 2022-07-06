#include "fm_gestaoestoque.h"
#include "ui_fm_gestaoestoque.h"


fm_gestaoEstoque::fm_gestaoEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaoEstoque)
{
    ui->setupUi(this);
    if(!con.abrir())
    {
        QMessageBox::critical(this,"ERROR","Erro ao abir banco de dados");
    }
    else
    {
        QSqlQuery query;
        query.prepare("select * from tb_produtos");
        if(!query.exec())
        {
           QMessageBox::critical(this,"ERROR","Erro ao listar");
        }

    }

  ui->tw_ge_produtos->setColumnCount(2);
  ui->tabWidget->setCurrentIndex(0);

}

fm_gestaoEstoque::~fm_gestaoEstoque()
{
    delete ui;
    con.fechar();
}

void fm_gestaoEstoque::on_btn_novoproduto_clicked()
{
   ui-> txt_codproduto -> clear();
   ui-> txt_descproduto-> clear();
   ui-> txt_fornecedor -> clear();
   ui-> txt_valovenda  -> clear();
   ui-> txt_qtdestoque -> clear();
   ui-> txt_valorcompra-> clear();
   ui-> txt_codproduto -> setFocus();
}

void fm_gestaoEstoque::on_btn_gravanovoproduto_clicked()
{

      //pega o que foi escrito no .ui
        QString codigo     = ui ->txt_codproduto ->  text();
        QString produto    = ui ->txt_descproduto->  text();
        QString fornecedor = ui ->txt_fornecedor ->  text();
        QString quantidade = ui ->txt_qtdestoque ->  text();
        QString valcompra  = ui ->txt_valorcompra->  text();
        QString valvenda   = ui ->txt_valovenda  ->  text();


        //cria query
        QSqlQuery query;
        query.prepare("insert into tb_produtos (id_produto,produto,id_fornecedor,quantidade,valor_compra,valor_venda)"
                " values('"+codigo+"','"+produto+"','"+fornecedor+"','"+quantidade+"','"+valcompra+"','"+valvenda+"')");

       if(!query.exec())
            {
              QMessageBox::critical(this,"ERROR","Erro ao inserir o produto");
            }
         else
              {
                 QMessageBox::information(this,"SALVO","Produto cadastrado");
              }

}

void fm_gestaoEstoque::on_tabWidget_currentChanged(int index)
{
    if(index==1)
    {
        funcoes_globais::remover_linhas(ui->tw_ge_produtos);
        int cont_linhas =0;
        //remover os produtos do table widget
        QSqlQuery query;
        query.prepare("select id_produto, produto from tb_produtos order by produto");

        if(query.exec())
          {
            while(query.next())
                 {
                    ui->tw_ge_produtos->insertRow(cont_linhas);
                    ui->tw_ge_produtos->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
                    ui->tw_ge_produtos->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
                    ui->tw_ge_produtos->setRowHeight(cont_linhas,20);
                    cont_linhas++;
                 }
           //formatação da tabela
            ui->tw_ge_produtos->setColumnWidth(0,100);
            ui->tw_ge_produtos->setColumnWidth(1,278);
            QStringList cabecalhos={"Código","Produto"};
            ui->tw_ge_produtos->setHorizontalHeaderLabels(cabecalhos);
            ui->tw_ge_produtos->setStyleSheet("QTableView {selection-backgroud-color:green}");
            ui->tw_ge_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tw_ge_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_ge_produtos->verticalHeader()->setVisible(false);
           }
              else
                  {
                   QMessageBox::critical(this,"ERRO","Erro ao listar os produtos");
                  }


    }
}

void fm_gestaoEstoque::on_tw_ge_produtos_itemSelectionChanged()
{
    int id=ui->tw_ge_produtos->item(ui->tw_ge_produtos->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_produtos where id_produto="+QString::number(id));
    if(query.exec())
    {
        query.first();
        ui->txt_ge_codproduto->setText(query.value(0).toString());
        ui->txt_ge_produto->setText(query.value(1).toString());
        ui->txt_ge_fornecedor->setText(query.value(2).toString());
        ui->txt_ge_qtd->setText(query.value(3).toString());
        ui->txt_ge_valcompra->setText(query.value(4).toString());
        ui->txt_ge_valvenda->setText(query.value(5).toString());
    }

}

void fm_gestaoEstoque::on_btn_ge_gravarF_clicked()
{
    if(ui->txt_ge_codproduto->text()=="")
    {
        QMessageBox::critical(this,"ERRO","Selecione um produto");
    }
    else
    {
        int id=ui->tw_ge_produtos->item(ui->tw_ge_produtos->currentRow(),0)->text().toInt();
        QString val_venda=ui->txt_ge_valvenda->text();
        QString val_compra=ui->txt_ge_valcompra->text();
        QString prod=ui->txt_ge_codproduto->text();
        QString forn=ui->txt_ge_fornecedor->text();
        QString qtd=ui->txt_ge_qtd->text();

        QSqlQuery query;
        query.prepare("update tb_produtos set id_produto="+QString::number(id)+",produto='"+prod+"',id_fornecedor='"+forn+"',quantidade='"+qtd+"',valor_compra='"+val_compra+"',valor_venda='"+val_venda+"'");
        if(query.exec())
        {
            int linha=ui->tw_ge_produtos->currentRow();
            ui->tw_ge_produtos->item(linha,0)->setText(ui->txt_ge_codproduto->text());
            ui->tw_ge_produtos->item(linha,1)->setText(prod);
            QMessageBox::information(this,"Atualizado","Produto atualizado com sucesso");
        }
        else
        {
            QMessageBox::critical(this,"EROR","Erro ao atualizar o produto");
        }

    }


}

void fm_gestaoEstoque::on_btn_ge_excluir_clicked()
{
    if(ui->txt_ge_codproduto->text()=="")
    {
        QMessageBox::critical(this,"ERRO","Selecione um produto");
    }
    else
    {
       QMessageBox::StandardButton opc = QMessageBox::question(this,"Excluir","Tem certeza que deseja excluir o produto?",QMessageBox::Yes|QMessageBox::No);
        if(opc == QMessageBox::Yes)
        {
            int linha=ui->tw_ge_produtos->currentRow();
            int id=ui->tw_ge_produtos->item(linha,0)->text().toInt();
            QSqlQuery query;
            query.prepare("delete from tb_produtos where id_produto="+QString::number(id));
            if(query.exec())
            {
                ui->tw_ge_produtos->removeRow(linha);
                QMessageBox::information(this,"Deletado","Produto foi deletado");
             }
            else
            {
                QMessageBox::critical(this,"EROR","Erro ao deletar o produto");
            }
        }

    }
}

void fm_gestaoEstoque::on_btn_ge_filtrar_clicked()
{
    QString busca;
    funcoes_globais::remover_linhas(ui->tw_ge_produtos);

    if(ui->txt_ge_filtrar->text()=="")
    {
       if(ui->rb_ge_codigo->isChecked())
       {
           busca="select id_produto,produto from tb_produtos order by produto";
       }
      else
       {
           busca="select id_produto,produto from tb_produtos order by id_produto";
       }
    }
    else
    {
        if(ui->rb_ge_codigo->isChecked())
        {
            busca="select id_produto,produto from tb_produtos where id_produto="+ui->txt_ge_filtrar->text()+" order by produto";
        }
       else
        {
            busca="select id_produto,produto from tb_produtos where produto like '%"+ui->txt_ge_filtrar->text()+"%' order by produto";
        }
    }

    int cont_linhas=0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec())
    {
        while(query.next())
        {
            ui->tw_ge_produtos->insertRow(cont_linhas);
            ui->tw_ge_produtos->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_ge_produtos->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_ge_produtos->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
    }
    else
    {
        QMessageBox::warning(this,"ERRO","Erro ao filtar produto \n Verifique o preenchimento dos campos");
    }

    ui->txt_ge_filtrar->clear();
    ui->txt_ge_filtrar->setFocus();
}
