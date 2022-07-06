#ifndef VOO_HPP_INCLUDED
#define VOO_HPP_INCLUDED

#include <iostream>

using namespace std;

class Voo
{
private:
    size_t m_NumbVoo;
    string m_name;
    string m_piloto;
    string m_empresa;
public:
    Voo(): m_NumbVoo(0),m_name("") ,m_piloto(""), m_empresa(""){};
    Voo(size_t NumbVoo, string name , string piloto,string empresa):m_NumbVoo(NumbVoo), m_name(name),m_piloto(piloto), m_empresa(empresa){};
    ~Voo(){};

  void GetInfoVoo()
   {
       cout << "Nome do voo: " << m_name <<endl;
       cout << "Nome do piloto: " << m_piloto <<endl;
       cout << "Nome da companhia aerea: " << m_empresa <<endl;
       cout << "Numero do voo: " << m_NumbVoo <<endl;
       cout << endl;
   }
};


#endif // VOO_HPP_INCLUDED
