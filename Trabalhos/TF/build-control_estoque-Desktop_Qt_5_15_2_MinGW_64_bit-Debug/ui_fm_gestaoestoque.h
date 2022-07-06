/********************************************************************************
** Form generated from reading UI file 'fm_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOESTOQUE_H
#define UI_FM_GESTAOESTOQUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoEstoque
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_gestaoprodutos;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_codproduto;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_descproduto;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_qtdestoque;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_valorcompra;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *txt_valovenda;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_fornecedor;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novoproduto;
    QPushButton *btn_gravanovoproduto;
    QWidget *tab_novoproduto;
    QTableWidget *tw_ge_produtos;
    QGroupBox *groupBox;
    QRadioButton *rb_ge_codigo;
    QRadioButton *rb_ge_produto;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_ge_gravarF;
    QPushButton *btn_ge_excluir;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLineEdit *txt_ge_codproduto;
    QLabel *label_8;
    QLineEdit *txt_ge_produto;
    QLabel *label_9;
    QLineEdit *txt_ge_qtd;
    QLabel *label_10;
    QLineEdit *txt_ge_valcompra;
    QLabel *label_11;
    QLineEdit *txt_ge_valvenda;
    QLabel *label_12;
    QLineEdit *txt_ge_fornecedor;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txt_ge_filtrar;
    QPushButton *btn_ge_filtrar;

    void setupUi(QDialog *fm_gestaoEstoque)
    {
        if (fm_gestaoEstoque->objectName().isEmpty())
            fm_gestaoEstoque->setObjectName(QString::fromUtf8("fm_gestaoEstoque"));
        fm_gestaoEstoque->resize(664, 397);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        fm_gestaoEstoque->setWindowIcon(icon);
        tabWidget = new QTabWidget(fm_gestaoEstoque);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 661, 381));
        tab_gestaoprodutos = new QWidget();
        tab_gestaoprodutos->setObjectName(QString::fromUtf8("tab_gestaoprodutos"));
        layoutWidget = new QWidget(tab_gestaoprodutos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 631, 201));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        txt_codproduto = new QLineEdit(layoutWidget);
        txt_codproduto->setObjectName(QString::fromUtf8("txt_codproduto"));

        verticalLayout->addWidget(txt_codproduto);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_descproduto = new QLineEdit(layoutWidget);
        txt_descproduto->setObjectName(QString::fromUtf8("txt_descproduto"));

        verticalLayout_2->addWidget(txt_descproduto);


        verticalLayout_7->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        txt_qtdestoque = new QLineEdit(layoutWidget);
        txt_qtdestoque->setObjectName(QString::fromUtf8("txt_qtdestoque"));

        verticalLayout_3->addWidget(txt_qtdestoque);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        txt_valorcompra = new QLineEdit(layoutWidget);
        txt_valorcompra->setObjectName(QString::fromUtf8("txt_valorcompra"));

        verticalLayout_5->addWidget(txt_valorcompra);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        txt_valovenda = new QLineEdit(layoutWidget);
        txt_valovenda->setObjectName(QString::fromUtf8("txt_valovenda"));

        verticalLayout_6->addWidget(txt_valovenda);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        txt_fornecedor = new QLineEdit(layoutWidget);
        txt_fornecedor->setObjectName(QString::fromUtf8("txt_fornecedor"));

        verticalLayout_4->addWidget(txt_fornecedor);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_novoproduto = new QPushButton(layoutWidget);
        btn_novoproduto->setObjectName(QString::fromUtf8("btn_novoproduto"));

        horizontalLayout->addWidget(btn_novoproduto);

        btn_gravanovoproduto = new QPushButton(layoutWidget);
        btn_gravanovoproduto->setObjectName(QString::fromUtf8("btn_gravanovoproduto"));

        horizontalLayout->addWidget(btn_gravanovoproduto);


        verticalLayout_7->addLayout(horizontalLayout);

        tabWidget->addTab(tab_gestaoprodutos, QString());
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName(QString::fromUtf8("tab_novoproduto"));
        tw_ge_produtos = new QTableWidget(tab_novoproduto);
        tw_ge_produtos->setObjectName(QString::fromUtf8("tw_ge_produtos"));
        tw_ge_produtos->setGeometry(QRect(270, 90, 381, 191));
        groupBox = new QGroupBox(tab_novoproduto);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(270, 20, 120, 61));
        rb_ge_codigo = new QRadioButton(groupBox);
        rb_ge_codigo->setObjectName(QString::fromUtf8("rb_ge_codigo"));
        rb_ge_codigo->setGeometry(QRect(10, 20, 82, 17));
        rb_ge_produto = new QRadioButton(groupBox);
        rb_ge_produto->setObjectName(QString::fromUtf8("rb_ge_produto"));
        rb_ge_produto->setGeometry(QRect(10, 40, 82, 17));
        layoutWidget1 = new QWidget(tab_novoproduto);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 320, 641, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_ge_gravarF = new QPushButton(layoutWidget1);
        btn_ge_gravarF->setObjectName(QString::fromUtf8("btn_ge_gravarF"));

        horizontalLayout_3->addWidget(btn_ge_gravarF);

        btn_ge_excluir = new QPushButton(layoutWidget1);
        btn_ge_excluir->setObjectName(QString::fromUtf8("btn_ge_excluir"));

        horizontalLayout_3->addWidget(btn_ge_excluir);

        layoutWidget2 = new QWidget(tab_novoproduto);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 241, 284));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_8->addWidget(label_7);

        txt_ge_codproduto = new QLineEdit(layoutWidget2);
        txt_ge_codproduto->setObjectName(QString::fromUtf8("txt_ge_codproduto"));

        verticalLayout_8->addWidget(txt_ge_codproduto);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_8->addWidget(label_8);

        txt_ge_produto = new QLineEdit(layoutWidget2);
        txt_ge_produto->setObjectName(QString::fromUtf8("txt_ge_produto"));

        verticalLayout_8->addWidget(txt_ge_produto);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_8->addWidget(label_9);

        txt_ge_qtd = new QLineEdit(layoutWidget2);
        txt_ge_qtd->setObjectName(QString::fromUtf8("txt_ge_qtd"));

        verticalLayout_8->addWidget(txt_ge_qtd);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_8->addWidget(label_10);

        txt_ge_valcompra = new QLineEdit(layoutWidget2);
        txt_ge_valcompra->setObjectName(QString::fromUtf8("txt_ge_valcompra"));

        verticalLayout_8->addWidget(txt_ge_valcompra);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_8->addWidget(label_11);

        txt_ge_valvenda = new QLineEdit(layoutWidget2);
        txt_ge_valvenda->setObjectName(QString::fromUtf8("txt_ge_valvenda"));

        verticalLayout_8->addWidget(txt_ge_valvenda);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_8->addWidget(label_12);

        txt_ge_fornecedor = new QLineEdit(layoutWidget2);
        txt_ge_fornecedor->setObjectName(QString::fromUtf8("txt_ge_fornecedor"));

        verticalLayout_8->addWidget(txt_ge_fornecedor);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        layoutWidget3 = new QWidget(tab_novoproduto);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(400, 30, 251, 51));
        verticalLayout_9 = new QVBoxLayout(layoutWidget3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_9->addWidget(label_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        txt_ge_filtrar = new QLineEdit(layoutWidget3);
        txt_ge_filtrar->setObjectName(QString::fromUtf8("txt_ge_filtrar"));

        horizontalLayout_4->addWidget(txt_ge_filtrar);

        btn_ge_filtrar = new QPushButton(layoutWidget3);
        btn_ge_filtrar->setObjectName(QString::fromUtf8("btn_ge_filtrar"));

        horizontalLayout_4->addWidget(btn_ge_filtrar);


        verticalLayout_9->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_novoproduto, QString());

        retranslateUi(fm_gestaoEstoque);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(fm_gestaoEstoque);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoEstoque)
    {
        fm_gestaoEstoque->setWindowTitle(QCoreApplication::translate("fm_gestaoEstoque", "Gest\303\243o de Estoque", nullptr));
        label->setText(QCoreApplication::translate("fm_gestaoEstoque", "Codigo do produto", nullptr));
        label_2->setText(QCoreApplication::translate("fm_gestaoEstoque", "Descri\303\247\303\243o do produto", nullptr));
        label_3->setText(QCoreApplication::translate("fm_gestaoEstoque", "Quantidade em estoque", nullptr));
        label_5->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor de compra", nullptr));
        label_6->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor de venda", nullptr));
        label_4->setText(QCoreApplication::translate("fm_gestaoEstoque", "Fornecedor", nullptr));
        btn_novoproduto->setText(QCoreApplication::translate("fm_gestaoEstoque", "novo", nullptr));
        btn_gravanovoproduto->setText(QCoreApplication::translate("fm_gestaoEstoque", "gravar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaoprodutos), QCoreApplication::translate("fm_gestaoEstoque", "Novo Produto", nullptr));
        groupBox->setTitle(QCoreApplication::translate("fm_gestaoEstoque", "Filtrar por:", nullptr));
        rb_ge_codigo->setText(QCoreApplication::translate("fm_gestaoEstoque", "Codigo", nullptr));
        rb_ge_produto->setText(QCoreApplication::translate("fm_gestaoEstoque", "Produto", nullptr));
        btn_ge_gravarF->setText(QCoreApplication::translate("fm_gestaoEstoque", "Gravar", nullptr));
        btn_ge_excluir->setText(QCoreApplication::translate("fm_gestaoEstoque", "Excluir", nullptr));
        label_7->setText(QCoreApplication::translate("fm_gestaoEstoque", "Codigo do Produto", nullptr));
        label_8->setText(QCoreApplication::translate("fm_gestaoEstoque", "Produto", nullptr));
        label_9->setText(QCoreApplication::translate("fm_gestaoEstoque", "Quantidade", nullptr));
        label_10->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor Compra", nullptr));
        label_11->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor Venda", nullptr));
        label_12->setText(QCoreApplication::translate("fm_gestaoEstoque", "Fornecedor", nullptr));
        label_13->setText(QCoreApplication::translate("fm_gestaoEstoque", "Filtar", nullptr));
        btn_ge_filtrar->setText(QCoreApplication::translate("fm_gestaoEstoque", "ok", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novoproduto), QCoreApplication::translate("fm_gestaoEstoque", "Gest\303\243o dos Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoEstoque: public Ui_fm_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOESTOQUE_H
