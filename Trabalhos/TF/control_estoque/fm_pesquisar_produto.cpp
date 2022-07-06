#include "fm_pesquisar_produto.h"
#include "ui_fm_pesquisar_produto.h"

fm_pesquisar_produto::fm_pesquisar_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_pesquisar_produto)
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

  ui->tw_pp_produtos->setColumnCount(4);
 // ui->tabWidget->setCurrentIndex(0);


      funcoes_globais::remover_linhas(ui->tw_pp_produtos);
      int cont_linhas =0;
      //remover os produtos do table widget
      QSqlQuery query;
      query.prepare("select id_produto, produto,quantidade,valor_venda from tb_produtos order by id_produto");

      if(query.exec())
        {
          while(query.next())
               {
                  ui->tw_pp_produtos->insertRow(cont_linhas);
                  ui->tw_pp_produtos->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
                  ui->tw_pp_produtos->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
                  ui->tw_pp_produtos->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
                  ui->tw_pp_produtos->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
                  ui->tw_pp_produtos->setRowHeight(cont_linhas,20);
                  cont_linhas++;
               }
         //formatação da tabela
          ui->tw_pp_produtos->setColumnWidth(0,100);
          ui->tw_pp_produtos->setColumnWidth(1,278);
          QStringList cabecalhos={"Código","Produto","Qtd","Preço"};
          ui->tw_pp_produtos->setHorizontalHeaderLabels(cabecalhos);
          ui->tw_pp_produtos->setStyleSheet("QTableView {selection-backgroud-color:green}");
          ui->tw_pp_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
          ui->tw_pp_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
          ui->tw_pp_produtos->verticalHeader()->setVisible(false);
         }
            else
                {
                 QMessageBox::critical(this,"ERRO","Erro ao listar os produtos");
                }



}

fm_pesquisar_produto::~fm_pesquisar_produto()
{
    delete ui;
}

void fm_pesquisar_produto::on_rb_pp_codigo_clicked()
{

}

void fm_pesquisar_produto::on_btn_pp_filtrar_clicked()
{
    QString busca;
    funcoes_globais::remover_linhas(ui->tw_pp_produtos);

    if(ui->txt_pp_filtrar->text()=="")
    {
       if(ui->rb_pp_codigo->isChecked())
       {
           busca="select id_produto, produto,quantidade,valor_venda from tb_produtos order by id_produto";
       }
      else
       {
           busca="select id_produto, produto,quantidade,valor_venda from tb_produtos order by produto";
       }
    }
    else
    {
        if(ui->rb_pp_codigo->isChecked())
        {
            busca="select id_produto,produto,quantidade,valor_venda from tb_produtos where id_produto="+ui->txt_pp_filtrar->text()+" order by produto";
        }
       else
        {
            busca="select id_produto,produto,quantidade,valor_venda from tb_produtos where produto like '%"+ui->txt_pp_filtrar->text()+"%' order by produto";
        }
    }

    int cont_linhas=0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec())
    {
        while(query.next())
        {
            ui->tw_pp_produtos->insertRow(cont_linhas);
            ui->tw_pp_produtos->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_pp_produtos->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_pp_produtos->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_pp_produtos->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_pp_produtos->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
    }
    else
    {
        QMessageBox::warning(this,"ERRO","Erro ao filtar produto \n Verifique o preenchimento dos campos");
    }

    ui->txt_pp_filtrar->clear();
    ui->txt_pp_filtrar->setFocus();
}
