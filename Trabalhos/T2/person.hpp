#ifndef PERSON_HPP_INCLUDED
#define PERSON_HPP_INCLUDED

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>


using namespace std;

struct personPF
{
    string nome;
    string nomeMae;
    string cpf;
    string endereco;
    string telefone;

};

struct personPJ
{
    string razaoSocial;
    string cnpj;
    string endereco;
    string telefone;
    size_t capitalSocial;

};
 bool LoadDatabase(string path , vector < personPF > &listPF ,vector < personPJ > &listPJ);

 void SaveDatabase(string path,  vector < personPF > &listPF ,  vector < personPJ > &listPJ);


#endif // PERSON_HPP_INCLUDED
