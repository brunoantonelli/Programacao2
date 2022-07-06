#ifndef HEADER_HPP_INCLUDED
#define HEADER_HPP_INCLUDED

#include "Voo.hpp"
#include <string>

class Passageiro
{
protected:
    string m_NameofPass;
    Voo* m_voo;
public:
    Passageiro(): m_voo(NULL), m_NameofPass(""){};
    Passageiro(Voo *voo, string NameofPass): m_voo(voo), m_NameofPass(NameofPass){};

    string GetNameofPass() const {return m_NameofPass;};
};

class Poltrona : public Passageiro
{
private:
    int m_pol;
    Voo *m_voo;
public:
    Poltrona(): m_pol(0){};
    Poltrona(Voo *voo, int Numbpol):m_voo(voo),m_pol(Numbpol){};

    int SetPoltrona() {return m_pol;};
};

class Passagem : public Passageiro
{
private:
    float m_passagem;
    Voo *m_voo;
public:
    Passagem(): m_passagem(0){};
    Passagem(Voo *voo, float passagem): m_voo(voo), m_passagem(passagem){};

   float GetPassagem () {return m_passagem;};
};


#endif // HEADER_HPP_INCLUDED
