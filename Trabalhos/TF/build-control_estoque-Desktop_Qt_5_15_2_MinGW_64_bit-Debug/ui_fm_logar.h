/********************************************************************************
** Form generated from reading UI file 'fm_logar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_LOGAR_H
#define UI_FM_LOGAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_logar
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_logar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_logar)
    {
        if (fm_logar->objectName().isEmpty())
            fm_logar->setObjectName(QString::fromUtf8("fm_logar"));
        fm_logar->resize(377, 100);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        fm_logar->setWindowIcon(icon);
        layoutWidget = new QWidget(fm_logar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 361, 85));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_senha = new QLineEdit(layoutWidget);
        txt_senha->setObjectName(QString::fromUtf8("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_logar = new QPushButton(layoutWidget);
        btn_logar->setObjectName(QString::fromUtf8("btn_logar"));

        horizontalLayout_3->addWidget(btn_logar);

        btn_cancelar = new QPushButton(layoutWidget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_3->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(fm_logar);

        QMetaObject::connectSlotsByName(fm_logar);
    } // setupUi

    void retranslateUi(QDialog *fm_logar)
    {
        fm_logar->setWindowTitle(QCoreApplication::translate("fm_logar", "Login", nullptr));
        label->setText(QCoreApplication::translate("fm_logar", "Username", nullptr));
        txt_username->setText(QCoreApplication::translate("fm_logar", "adm", nullptr));
        label_2->setText(QCoreApplication::translate("fm_logar", "Senha", nullptr));
        txt_senha->setText(QCoreApplication::translate("fm_logar", "123", nullptr));
        btn_logar->setText(QCoreApplication::translate("fm_logar", "Logar", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("fm_logar", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_logar: public Ui_fm_logar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_LOGAR_H
