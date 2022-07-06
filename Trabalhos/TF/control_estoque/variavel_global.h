#ifndef VARIAVEL_GLOBAL_H
#define VARIAVEL_GLOBAL_H

#include <QtSql>
#include <QDialog>
#include <QMessageBox>
#include <QTableWidget>

#include "fm_logar.h"
#include "fm_novavenda.h"
#include "fm_gestaoestoque.h"
#include "fm_gestaousuario.h"
#include "fm_gestaovendas.h"
#include "fm_principal.h"
#include "sobre.h"



class variavel_global
{
public:
    static bool logado;
    static QString nome_usuario,acesso_usuario,usernarme_usuario;
    static int id_usuario;

};




#endif // VARIAVEL_GLOBAL_H
