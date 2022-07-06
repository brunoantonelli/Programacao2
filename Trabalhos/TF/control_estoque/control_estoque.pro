QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fm_gestaoestoque.cpp \
    fm_gestaousuario.cpp \
    fm_gestaovendas.cpp \
    fm_logar.cpp \
    fm_novavenda.cpp \
    fm_pesquisar_produto.cpp \
    funcoes_globais.cpp \
    main.cpp \
    fm_principal.cpp \
    sobre.cpp

HEADERS += \
    conexao.h \
    fm_gestaoestoque.h \
    fm_gestaousuario.h \
    fm_gestaovendas.h \
    fm_logar.h \
    fm_novavenda.h \
    fm_pesquisar_produto.h \
    fm_principal.h \
    funcoes_globais.h \
    sobre.h \
    variavel_global.h

FORMS += \
    fm_gestaoestoque.ui \
    fm_gestaousuario.ui \
    fm_gestaovendas.ui \
    fm_logar.ui \
    fm_novavenda.ui \
    fm_pesquisar_produto.ui \
    fm_principal.ui \
    sobre.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
