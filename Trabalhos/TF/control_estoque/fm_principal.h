#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QMainWindow>
#include "variavel_global.h"
#include "conexao.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Fm_principal; }
QT_END_NAMESPACE

class Fm_principal : public QMainWindow
{
    Q_OBJECT

public:
    Fm_principal(QWidget *parent = nullptr);
    ~Fm_principal();
    QIcon *cadFechado = new QIcon();
    QIcon *cadAberto  = new QIcon();
    QIcon *logo       = new QIcon();



private slots:
    void on_btn_bloquear_clicked();

    void on_pushButton_2_clicked();

    void on_actionEstoque_triggered();

    void on_actionSobre_triggered();

    void on_actionUsuario_triggered();

    void on_actionVendas_triggered();

private:
    Ui::Fm_principal *ui;
};
#endif // FM_PRINCIPAL_H
