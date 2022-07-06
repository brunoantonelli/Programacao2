#include "fm_gestaovendas.h"
#include "ui_fm_gestaovendas.h"
#include <QDebug>

fm_gestaoVendas::fm_gestaoVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaoVendas)
{
    ui->setupUi(this);

    //formatar tabela das vendas
    ui->tw_gv_listaVendas->horizontalHeader()->setVisible(true);
    ui->tw_gv_listaVendas->setColumnCount(6);
    QStringList cabe2={"ID","Data","Hora","Valor Total","Usuario","Tipo PG"};
    ui->tw_gv_listaVendas->setHorizontalHeaderLabels(cabe2);
    ui->tw_gv_listaVendas->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_gv_listaVendas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_gv_listaVendas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_gv_listaVendas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //formatar tabela Produtos das vendas
    ui->tw_gv_listaprodutos->horizontalHeader()->setVisible(true);
    ui->tw_gv_listaprodutos->setColumnCount(5);
    QStringList cabe1={"ID Mov.","Produto","Quantidade","Valor unitario","Valor Total"};
    ui->tw_gv_listaprodutos->setHorizontalHeaderLabels(cabe1);
    ui->tw_gv_listaprodutos->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_gv_listaprodutos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_gv_listaprodutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_gv_listaprodutos->setEditTriggers(QAbstractItemView::NoEditTriggers);


    con.abrir();
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from td_vendas");
    query.exec();
    query.first();
    do{
        //inserir no Table Widget os valores do banco de dados
        ui->tw_gv_listaVendas->insertRow(cont_linhas);
        ui->tw_gv_listaVendas->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,5,new QTableWidgetItem(query.value(5).toString()));

        cont_linhas++;

    }while (query.next());

    con.fechar();
}

fm_gestaoVendas::~fm_gestaoVendas()
{
    delete ui;
}



void fm_gestaoVendas::on_tw_gv_listaVendas_itemSelectionChanged()
{
    ui->tw_gv_listaprodutos->setRowCount(0);
    con.abrir();
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select id_movimentacao,produto,quantidade,valor_un,valor_total from tb_produtos_vendas where id_venda="+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),0)->text());
    if(!query.exec())
    {
        qDebug()<< "ERRO:"<< query.lastError().text();
    }
    query.first();
    do{
        //inserir no Table Widget os Produtos das vendas do banco de dados
        ui->tw_gv_listaprodutos->insertRow(cont_linhas);
        ui->tw_gv_listaprodutos->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_gv_listaprodutos->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_gv_listaprodutos->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_gv_listaprodutos->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_gv_listaprodutos->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));

        cont_linhas++;

    }while (query.next());

    con.fechar();
}

void fm_gestaoVendas::on_btn_gv_filtar_clicked()
{
    funcoes_globais::remover_linhas(ui->tw_gv_listaVendas);
    ui->tw_gv_listaprodutos->setRowCount(0);
    con.abrir();
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from td_vendas where data_venda between '"+ui->de_gv_dataini->text()+"' and '"+ui->de_gv_datafim->text()+"'");
    query.exec();
    query.first();
    do{
        //inserir no Table Widget os valores do banco de dados
        ui->tw_gv_listaVendas->insertRow(cont_linhas);
        ui->tw_gv_listaVendas->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,5,new QTableWidgetItem(query.value(5).toString()));

        cont_linhas++;

    }while (query.next());

    con.fechar();
}

void fm_gestaoVendas::on_btn_gv_relatorio_clicked()
{
   QString nome=QDir::currentPath()+"/"+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),0)->text()+"_vendas.pfd";
   QPrinter printer;
   printer.setOutputFormat(QPrinter::PdfFormat);
   printer.setOutputFileName(nome);

   QPainter painter;
   if(!painter.begin(&printer))
   {
       qDebug()<<"Erro ao abrir PDF";
       return;
   }
   else
   {
       int linhas=350;
       int salto=20;

       //inserção no pdf
       painter.drawPixmap(150,25,QPixmap(":/imagens/img/bw_logo.png"));
       painter.drawText(25,300,"ID:"+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),0)->text());
       painter.drawText(150,300,"Data:"+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),1)->text());
       painter.drawText(25,325,"ID Mov.");
       painter.drawText(80,325,"Produto");
       painter.drawText(300,325,"Quantidade");
       painter.drawText(400,325,"Valor compra");
       painter.drawText(500,325,"valor venda");
       for(int i=0;i<ui->tw_gv_listaprodutos->rowCount();i++)
       {
           painter.drawText(25,linhas,ui->tw_gv_listaprodutos->item(i,0)->text());
           painter.drawText(80,linhas,ui->tw_gv_listaprodutos->item(i,1)->text());
           painter.drawText(300,linhas,ui->tw_gv_listaprodutos->item(i,2)->text());
           painter.drawText(400,linhas,ui->tw_gv_listaprodutos->item(i,3)->text());
           painter.drawText(500,linhas,ui->tw_gv_listaprodutos->item(i,4)->text());

           linhas+=salto;
       }
       QMessageBox::information(this,"Sucesso","Relatorio gerado");

   }


}
