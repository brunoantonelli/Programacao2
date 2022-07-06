/********************************************************************************
** Form generated from reading UI file 'fm_gestaovendas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOVENDAS_H
#define UI_FM_GESTAOVENDAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoVendas
{
public:
    QTableWidget *tw_gv_listaVendas;
    QTableWidget *tw_gv_listaprodutos;
    QPushButton *btn_gv_relatorio;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDateEdit *de_gv_dataini;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDateEdit *de_gv_datafim;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_gv_filtar;

    void setupUi(QDialog *fm_gestaoVendas)
    {
        if (fm_gestaoVendas->objectName().isEmpty())
            fm_gestaoVendas->setObjectName(QString::fromUtf8("fm_gestaoVendas"));
        fm_gestaoVendas->resize(639, 386);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/_Logotipobw.png"), QSize(), QIcon::Normal, QIcon::Off);
        fm_gestaoVendas->setWindowIcon(icon);
        tw_gv_listaVendas = new QTableWidget(fm_gestaoVendas);
        tw_gv_listaVendas->setObjectName(QString::fromUtf8("tw_gv_listaVendas"));
        tw_gv_listaVendas->setGeometry(QRect(20, 60, 601, 91));
        tw_gv_listaprodutos = new QTableWidget(fm_gestaoVendas);
        tw_gv_listaprodutos->setObjectName(QString::fromUtf8("tw_gv_listaprodutos"));
        tw_gv_listaprodutos->setEnabled(true);
        tw_gv_listaprodutos->setGeometry(QRect(20, 160, 601, 181));
        btn_gv_relatorio = new QPushButton(fm_gestaoVendas);
        btn_gv_relatorio->setObjectName(QString::fromUtf8("btn_gv_relatorio"));
        btn_gv_relatorio->setGeometry(QRect(20, 350, 131, 21));
        widget = new QWidget(fm_gestaoVendas);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 141, 44));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        de_gv_dataini = new QDateEdit(widget);
        de_gv_dataini->setObjectName(QString::fromUtf8("de_gv_dataini"));

        verticalLayout->addWidget(de_gv_dataini);

        widget1 = new QWidget(fm_gestaoVendas);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(170, 10, 141, 44));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        de_gv_datafim = new QDateEdit(widget1);
        de_gv_datafim->setObjectName(QString::fromUtf8("de_gv_datafim"));

        verticalLayout_2->addWidget(de_gv_datafim);

        widget2 = new QWidget(fm_gestaoVendas);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(360, 30, 201, 23));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_gv_filtar = new QPushButton(widget2);
        btn_gv_filtar->setObjectName(QString::fromUtf8("btn_gv_filtar"));

        horizontalLayout->addWidget(btn_gv_filtar);


        retranslateUi(fm_gestaoVendas);

        QMetaObject::connectSlotsByName(fm_gestaoVendas);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoVendas)
    {
        fm_gestaoVendas->setWindowTitle(QCoreApplication::translate("fm_gestaoVendas", "Gest\303\243o de Vendas", nullptr));
        btn_gv_relatorio->setText(QCoreApplication::translate("fm_gestaoVendas", "Gerar relatorio PDF", nullptr));
        label->setText(QCoreApplication::translate("fm_gestaoVendas", "Data inicial ", nullptr));
        label_2->setText(QCoreApplication::translate("fm_gestaoVendas", "Data final", nullptr));
        btn_gv_filtar->setText(QCoreApplication::translate("fm_gestaoVendas", "Filtrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoVendas: public Ui_fm_gestaoVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOVENDAS_H
