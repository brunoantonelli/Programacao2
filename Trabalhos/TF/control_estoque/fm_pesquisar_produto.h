#ifndef FM_PESQUISAR_PRODUTO_H
#define FM_PESQUISAR_PRODUTO_H

#include <QDialog>
#include <QMessageBox>
#include "variavel_global.h"
#include "conexao.h"

namespace Ui {
class fm_pesquisar_produto;
}

class fm_pesquisar_produto : public QDialog
{
    Q_OBJECT

public:
    explicit fm_pesquisar_produto(QWidget *parent = nullptr);
    ~fm_pesquisar_produto();
    Conexao con;

private slots:
    void on_rb_pp_codigo_clicked();

    void on_btn_pp_filtrar_clicked();

private:
    Ui::fm_pesquisar_produto *ui;
};

#endif // FM_PESQUISAR_PRODUTO_H
