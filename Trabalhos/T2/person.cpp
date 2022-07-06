#include "person.hpp"

using namespace std;

bool LoadDatabase(string path , vector < personPF > &listPF , vector < personPJ > &listPJ)
{
     ifstream fileReader(path);
     if (fileReader.is_open())
        {
            string lineString;
            personPF tempPF;
            personPJ tempPJ;
            while (getline(fileReader, lineString))
        {
            if (lineString == "1")
            {
                getline(fileReader, tempPF.nome);
                getline(fileReader, tempPF.nomeMae);
                getline(fileReader, tempPF.cpf);
                getline(fileReader, tempPF.endereco);
                getline(fileReader, tempPF.telefone);

                listPF.push_back(tempPF);

            } else if (lineString == "2")
                {
                getline(fileReader, tempPJ.razaoSocial);
                getline(fileReader, tempPJ.cnpj);
                getline(fileReader, tempPJ.endereco);
                getline(fileReader, tempPJ.telefone);
                getline(fileReader, lineString);
                tempPJ.capitalSocial = atoi(lineString.c_str());

                listPJ.push_back(tempPJ);
                }
        }
        fileReader.close();
        return true;
    } else {
        return false;
    }
}

void SaveDatabase(string path,  vector < personPF > &listPF ,  vector < personPJ > &listPJ)
{
    ofstream fileWriter(path);
    ofstream("database.dat", ofstream::app);

    for (size_t i=0; i<listPF.size(); i++)
    {
        fileWriter
            << "1" << endl
            << listPF.at(i).nome << endl
            << listPF.at(i).nomeMae << endl
            << listPF.at(i).cpf << endl
            << listPF.at(i).endereco << endl
            << listPF.at(i).telefone << endl;
    }
    for (size_t i=0; i<listPJ.size(); i++)
    {
        fileWriter
            << "2" << endl
            << listPJ.at(i).razaoSocial << endl
            << listPJ.at(i).cnpj << endl
            << listPJ.at(i).endereco << endl
            << listPJ.at(i).telefone << endl
            << listPJ.at(i).capitalSocial << endl;
    }

    fileWriter.close();

}
