#ifndef FM_GESTAOUSUARIO_H
#define FM_GESTAOUSUARIO_H

#include "funcoes_globais.h"
#include "variavel_global.h"
#include "conexao.h"

namespace Ui {
class fm_gestaoUsuario;
}

class fm_gestaoUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaoUsuario(QWidget *parent = nullptr);
    ~fm_gestaoUsuario();
   Conexao con;

private slots:
   void on_btn_novo_novousuario_clicked();

   void on_btn_novousuario_gravar_clicked();

   void on_pushButton_2_clicked();

   void on_tabWidget_currentChanged(int index);

   void on_btn_gu_excluir_clicked();

   void on_tw_gu_listausuario_itemSelectionChanged();

   void on_btn_gu_filtrar_clicked();

private:
    Ui::fm_gestaoUsuario *ui;
};

#endif // FM_GESTAOUSUARIO_H
