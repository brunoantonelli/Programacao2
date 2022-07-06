/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fm_principal
{
public:
    QAction *actionEstoque;
    QAction *actionUsuario;
    QAction *actionVendas;
    QAction *actionSAIR;
    QAction *actionSobre;
    QWidget *centralwidget;
    QPushButton *btn_bloquear;
    QPushButton *pushButton_2;
    QLabel *lb_nome;
    QCalendarWidget *calendarWidget;
    QLabel *lb_Logo2;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Fm_principal)
    {
        if (Fm_principal->objectName().isEmpty())
            Fm_principal->setObjectName(QString::fromUtf8("Fm_principal"));
        Fm_principal->resize(700, 347);
        Fm_principal->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        Fm_principal->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        Fm_principal->setWindowIcon(icon);
        Fm_principal->setStyleSheet(QString::fromUtf8("background:#A9D0ED;"));
        actionEstoque = new QAction(Fm_principal);
        actionEstoque->setObjectName(QString::fromUtf8("actionEstoque"));
        actionUsuario = new QAction(Fm_principal);
        actionUsuario->setObjectName(QString::fromUtf8("actionUsuario"));
        actionVendas = new QAction(Fm_principal);
        actionVendas->setObjectName(QString::fromUtf8("actionVendas"));
        actionSAIR = new QAction(Fm_principal);
        actionSAIR->setObjectName(QString::fromUtf8("actionSAIR"));
        actionSobre = new QAction(Fm_principal);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        centralwidget = new QWidget(Fm_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_bloquear = new QPushButton(centralwidget);
        btn_bloquear->setObjectName(QString::fromUtf8("btn_bloquear"));
        btn_bloquear->setGeometry(QRect(0, 280, 30, 32));
        btn_bloquear->setFlat(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 230, 671, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"background:#0093FD;\n"
"color:#fff;\n"
"border-radius:10px;\n"
"\n"
"}\n"
"#pushButton_2:houver{\n"
"backgroud:#fff;\n"
"color:#0093FD;\n"
"border-radius:10px;\n"
"\n"
"}\n"
"\n"
""));
        lb_nome = new QLabel(centralwidget);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(30, 290, 121, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_nome->sizePolicy().hasHeightForWidth());
        lb_nome->setSizePolicy(sizePolicy);
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(360, 0, 321, 221));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        calendarWidget->setFont(font2);
        calendarWidget->setMouseTracking(false);
        calendarWidget->setTabletTracking(false);
        calendarWidget->setAcceptDrops(false);
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        calendarWidget->setGridVisible(true);
        calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        lb_Logo2 = new QLabel(centralwidget);
        lb_Logo2->setObjectName(QString::fromUtf8("lb_Logo2"));
        lb_Logo2->setGeometry(QRect(40, 10, 261, 211));
        lb_Logo2->setPixmap(QPixmap(QString::fromUtf8(":/imagens/img/_Logotipo.png")));
        lb_Logo2->setScaledContents(true);
        Fm_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Fm_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 20));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName(QString::fromUtf8("menuGest_o"));
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName(QString::fromUtf8("menuSistema"));
        Fm_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Fm_principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Fm_principal->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionUsuario);
        menuGest_o->addAction(actionVendas);
        menuSistema->addAction(actionSAIR);
        menuSistema->addSeparator();
        menuSistema->addAction(actionSobre);

        retranslateUi(Fm_principal);

        QMetaObject::connectSlotsByName(Fm_principal);
    } // setupUi

    void retranslateUi(QMainWindow *Fm_principal)
    {
        Fm_principal->setWindowTitle(QCoreApplication::translate("Fm_principal", "Controle de Estoque e Venda", nullptr));
        actionEstoque->setText(QCoreApplication::translate("Fm_principal", "Estoque", nullptr));
        actionUsuario->setText(QCoreApplication::translate("Fm_principal", "Usuarios", nullptr));
        actionVendas->setText(QCoreApplication::translate("Fm_principal", "Vendas", nullptr));
        actionSAIR->setText(QCoreApplication::translate("Fm_principal", "SAIR", nullptr));
        actionSobre->setText(QCoreApplication::translate("Fm_principal", "Sobre", nullptr));
        btn_bloquear->setText(QCoreApplication::translate("Fm_principal", "bloq", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Fm_principal", "NOVA VENDA", nullptr));
        lb_nome->setText(QCoreApplication::translate("Fm_principal", "Nenhum usuario logado", nullptr));
        lb_Logo2->setText(QString());
        menuGest_o->setTitle(QCoreApplication::translate("Fm_principal", "Gest\303\243o", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("Fm_principal", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fm_principal: public Ui_Fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
