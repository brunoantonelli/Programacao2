/********************************************************************************
** Form generated from reading UI file 'fm_pesquisar_produto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PESQUISAR_PRODUTO_H
#define UI_FM_PESQUISAR_PRODUTO_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_pesquisar_produto
{
public:
    QLabel *label;
    QTableWidget *tw_pp_produtos;
    QGroupBox *groupBox;
    QRadioButton *rb_pp_codigo;
    QRadioButton *rb_pp_produto;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txt_pp_filtrar;
    QPushButton *btn_pp_filtrar;

    void setupUi(QDialog *fm_pesquisar_produto)
    {
        if (fm_pesquisar_produto->objectName().isEmpty())
            fm_pesquisar_produto->setObjectName(QString::fromUtf8("fm_pesquisar_produto"));
        fm_pesquisar_produto->resize(603, 277);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        fm_pesquisar_produto->setWindowIcon(icon);
        label = new QLabel(fm_pesquisar_produto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 47, 13));
        tw_pp_produtos = new QTableWidget(fm_pesquisar_produto);
        tw_pp_produtos->setObjectName(QString::fromUtf8("tw_pp_produtos"));
        tw_pp_produtos->setGeometry(QRect(10, 80, 581, 191));
        groupBox = new QGroupBox(fm_pesquisar_produto);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 120, 61));
        rb_pp_codigo = new QRadioButton(groupBox);
        rb_pp_codigo->setObjectName(QString::fromUtf8("rb_pp_codigo"));
        rb_pp_codigo->setGeometry(QRect(10, 20, 82, 17));
        rb_pp_codigo->setCheckable(true);
        rb_pp_produto = new QRadioButton(groupBox);
        rb_pp_produto->setObjectName(QString::fromUtf8("rb_pp_produto"));
        rb_pp_produto->setGeometry(QRect(10, 40, 82, 17));
        rb_pp_produto->setChecked(true);
        layoutWidget = new QWidget(fm_pesquisar_produto);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 20, 451, 51));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_9->addWidget(label_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        txt_pp_filtrar = new QLineEdit(layoutWidget);
        txt_pp_filtrar->setObjectName(QString::fromUtf8("txt_pp_filtrar"));

        horizontalLayout_4->addWidget(txt_pp_filtrar);

        btn_pp_filtrar = new QPushButton(layoutWidget);
        btn_pp_filtrar->setObjectName(QString::fromUtf8("btn_pp_filtrar"));

        horizontalLayout_4->addWidget(btn_pp_filtrar);


        verticalLayout_9->addLayout(horizontalLayout_4);


        retranslateUi(fm_pesquisar_produto);

        QMetaObject::connectSlotsByName(fm_pesquisar_produto);
    } // setupUi

    void retranslateUi(QDialog *fm_pesquisar_produto)
    {
        fm_pesquisar_produto->setWindowTitle(QCoreApplication::translate("fm_pesquisar_produto", "Pesquisar produtos", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("fm_pesquisar_produto", "Filtrar por:", nullptr));
        rb_pp_codigo->setText(QCoreApplication::translate("fm_pesquisar_produto", "Codigo", nullptr));
        rb_pp_produto->setText(QCoreApplication::translate("fm_pesquisar_produto", "Produto", nullptr));
        label_13->setText(QCoreApplication::translate("fm_pesquisar_produto", "Filtar:", nullptr));
        btn_pp_filtrar->setText(QCoreApplication::translate("fm_pesquisar_produto", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_pesquisar_produto: public Ui_fm_pesquisar_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PESQUISAR_PRODUTO_H
