/********************************************************************************
** Form generated from reading UI file 'sobre.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBRE_H
#define UI_SOBRE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Sobre
{
public:
    QLabel *label;

    void setupUi(QDialog *Sobre)
    {
        if (Sobre->objectName().isEmpty())
            Sobre->setObjectName(QString::fromUtf8("Sobre"));
        Sobre->resize(550, 181);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        Sobre->setWindowIcon(icon);
        label = new QLabel(Sobre);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 551, 181));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/img/Sobre.png")));
        label->setScaledContents(true);

        retranslateUi(Sobre);

        QMetaObject::connectSlotsByName(Sobre);
    } // setupUi

    void retranslateUi(QDialog *Sobre)
    {
        Sobre->setWindowTitle(QCoreApplication::translate("Sobre", "Sobre", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Sobre: public Ui_Sobre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBRE_H
