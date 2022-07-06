#include "fm_logar.h"
#include "ui_fm_logar.h"

fm_logar::fm_logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_logar)
{
    ui->setupUi(this);
    logado=false;
}

fm_logar::~fm_logar()
{
    delete ui;
}

void fm_logar::on_btn_logar_clicked()
{
    //Abertura do banco de dados
    if(!con.abrir())
    {
        QMessageBox::critical(this,"ERRO","Erro ao abrir banco de dados");
    }
   else
    {
        //Seleção na ui e preparação e execução da query
        QString username,senha;
        username = ui-> txt_username->text();
        senha = ui->txt_senha->text();
        QSqlQuery query;
        query.prepare("select * from tb_usuario where username_usuario='"+username+"' and senha_usuario='"+senha+"'");
        if (query.lastError().isValid())
            qDebug() << query.lastError();
        if(query.exec())
        {
           query.first();
           if(query.value(1).toString()!="")
              {
                  //Verifica no banco as informações na query
                  variavel_global::logado=true;
                  variavel_global::nome_usuario=query.value(1).toString();
                  variavel_global::id_usuario=query.value(0).toInt();
                  variavel_global::acesso_usuario=query.value(5).toString();

                   con.fechar();
                   close();
               }
                   else
                       {
                         QMessageBox::critical(this,"ERRO","Usuario não encontrado");
                       }
        }
        else
        {
            QMessageBox::critical(this,"ERRO","Falha no log !!");
        }
    }


    con.fechar();
}

void fm_logar::on_btn_cancelar_clicked()
{
    logado=false;
    close();
}


