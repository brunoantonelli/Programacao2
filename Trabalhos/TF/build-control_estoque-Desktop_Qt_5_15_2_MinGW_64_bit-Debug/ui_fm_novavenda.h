/********************************************************************************
** Form generated from reading UI file 'fm_novavenda.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVAVENDA_H
#define UI_FM_NOVAVENDA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novaVenda
{
public:
    QLineEdit *txt_qtd;
    QLineEdit *txt_codprod;
    QTableWidget *tw_listaprodutos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lb_totalvendas;
    QPushButton *btn_excluirprod;
    QPushButton *btn_pesquisar;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *fm_novaVenda)
    {
        if (fm_novaVenda->objectName().isEmpty())
            fm_novaVenda->setObjectName(QString::fromUtf8("fm_novaVenda"));
        fm_novaVenda->resize(656, 332);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        fm_novaVenda->setWindowIcon(icon);
        txt_qtd = new QLineEdit(fm_novaVenda);
        txt_qtd->setObjectName(QString::fromUtf8("txt_qtd"));
        txt_qtd->setGeometry(QRect(20, 30, 113, 21));
        txt_codprod = new QLineEdit(fm_novaVenda);
        txt_codprod->setObjectName(QString::fromUtf8("txt_codprod"));
        txt_codprod->setGeometry(QRect(156, 30, 351, 21));
        tw_listaprodutos = new QTableWidget(fm_novaVenda);
        tw_listaprodutos->setObjectName(QString::fromUtf8("tw_listaprodutos"));
        tw_listaprodutos->setGeometry(QRect(20, 60, 605, 211));
        label = new QLabel(fm_novaVenda);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 71, 16));
        label_2 = new QLabel(fm_novaVenda);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 10, 131, 16));
        label_3 = new QLabel(fm_novaVenda);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 280, 61, 16));
        lb_totalvendas = new QLabel(fm_novaVenda);
        lb_totalvendas->setObjectName(QString::fromUtf8("lb_totalvendas"));
        lb_totalvendas->setGeometry(QRect(80, 280, 61, 16));
        btn_excluirprod = new QPushButton(fm_novaVenda);
        btn_excluirprod->setObjectName(QString::fromUtf8("btn_excluirprod"));
        btn_excluirprod->setGeometry(QRect(20, 300, 100, 21));
        btn_excluirprod->setAutoDefault(false);
        btn_pesquisar = new QPushButton(fm_novaVenda);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));
        btn_pesquisar->setGeometry(QRect(520, 30, 101, 21));
        btn_pesquisar->setAutoDefault(false);
        label_4 = new QLabel(fm_novaVenda);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 32, 47, 13));
        pushButton = new QPushButton(fm_novaVenda);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 300, 100, 21));
        pushButton->setAutoDefault(false);

        retranslateUi(fm_novaVenda);

        QMetaObject::connectSlotsByName(fm_novaVenda);
    } // setupUi

    void retranslateUi(QDialog *fm_novaVenda)
    {
        fm_novaVenda->setWindowTitle(QCoreApplication::translate("fm_novaVenda", "Nova venda", nullptr));
        txt_qtd->setText(QCoreApplication::translate("fm_novaVenda", "1", nullptr));
        label->setText(QCoreApplication::translate("fm_novaVenda", "Quantidade", nullptr));
        label_2->setText(QCoreApplication::translate("fm_novaVenda", "Codigo do produto", nullptr));
        label_3->setText(QCoreApplication::translate("fm_novaVenda", "Valor total", nullptr));
        lb_totalvendas->setText(QCoreApplication::translate("fm_novaVenda", "R$", nullptr));
        btn_excluirprod->setText(QCoreApplication::translate("fm_novaVenda", "Excluir Produto", nullptr));
        btn_pesquisar->setText(QCoreApplication::translate("fm_novaVenda", "Pesquisar Produto", nullptr));
        label_4->setText(QCoreApplication::translate("fm_novaVenda", "X", nullptr));
        pushButton->setText(QCoreApplication::translate("fm_novaVenda", "Finalizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_novaVenda: public Ui_fm_novaVenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVAVENDA_H
