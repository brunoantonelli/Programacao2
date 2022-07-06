#ifndef FM_NOVAVENDA_H
#define FM_NOVAVENDA_H

#include "funcoes_globais.h"
#include "variavel_global.h"
#include "conexao.h"
#include "fm_pesquisar_produto.h"


namespace Ui {
class fm_novaVenda;
}

class fm_novaVenda : public QDialog
{
    Q_OBJECT

public:
    explicit fm_novaVenda(QWidget *parent = nullptr);
    ~fm_novaVenda();
    Conexao con;
    int cont_linha;
    void resetar_campos();
    double calcula_total(QTableWidget *tw ,int coluna);
    void remover_linhas(QTableWidget *tw);


private slots:
    void on_txt_codprod_returnPressed();

    void on_btn_excluirprod_clicked();

    void on_btn_finalizar_clicked();

    void on_pushButton_clicked();

    void on_btn_pesquisar_clicked();

private:
    Ui::fm_novaVenda *ui;
};

#endif // FM_NOVAVENDA_H
