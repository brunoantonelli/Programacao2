#include "fm_principal.h"
#include "ui_fm_principal.h"


int variavel_global::id_usuario;
QString variavel_global::nome_usuario;
QString variavel_global::acesso_usuario;
QString variavel_global::usernarme_usuario;
bool variavel_global::logado;


Fm_principal::Fm_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Fm_principal)
{
    ui->setupUi(this);

    variavel_global::  logado = false;
    cadFechado ->addFile(":/imagens/img/cadeado_fechado.png");
    cadAberto  ->addFile(":/imagens/img/cadeado_aberto.png");
    logo->addFile(":/imagens/img/_Logotipo.png");

    ui->btn_bloquear->setText("");
    ui->btn_bloquear->setIcon(*cadFechado);
    ui->statusbar->addWidget(ui->btn_bloquear);
    ui->statusbar->addWidget(ui->lb_nome);


}

Fm_principal::~Fm_principal()
{
    delete ui;
}


void Fm_principal::on_btn_bloquear_clicked()
{
    if(!variavel_global::logado)
    {
        fm_logar f_logar;
        f_logar.exec();
        if(variavel_global::logado)
        {
            ui->btn_bloquear->setIcon(*cadAberto);
            ui->lb_nome->setText(variavel_global::nome_usuario);
        }

    }
    else
    {
       variavel_global::logado=false;
        ui->btn_bloquear->setIcon(*cadFechado);
        ui->lb_nome->setText("Nenhum usuario logado");
    }
}

void Fm_principal::on_pushButton_2_clicked()
{
    if(variavel_global::logado)
    {
         fm_novaVenda f_novavenda;
         f_novavenda.exec();
    }
    else
       {
        QMessageBox::information(this,"LOGIN","Nenhum usuario logado");
       }
}

void Fm_principal::on_actionEstoque_triggered()
{
    if(variavel_global::logado)
    {
        if(variavel_global::acesso_usuario=="A")
        {
         fm_gestaoEstoque f_gestaoEstoque;
         f_gestaoEstoque.exec();
        }
        else
        {
            QMessageBox::information(this,"ACESSO","Acesso não permetido \n Entrar em contato com os administradores");
        }

   }
}

void Fm_principal::on_actionSobre_triggered()
{
    Sobre f_sobre;
    f_sobre.exec();
}

void Fm_principal::on_actionUsuario_triggered()
{
    if(variavel_global::logado)
    {
        if(variavel_global::acesso_usuario=="A")
        {
         fm_gestaoUsuario f_gestaoUsuario;
         f_gestaoUsuario.exec();
        }
        else
        {
            QMessageBox::information(this,"ACESSO","Acesso não permetido \n Entrar em contato com os administradores");
        }

   }
}

void Fm_principal::on_actionVendas_triggered()
{
    if(variavel_global::logado)
    {
        if(variavel_global::acesso_usuario=="A")
        {
         fm_gestaoVendas f_gestaoVenda;
         f_gestaoVenda.exec();
        }
        else
        {
            QMessageBox::information(this,"ACESSO","Acesso não permetido \n Entrar em contato com os administradores");
        }

   }
}
