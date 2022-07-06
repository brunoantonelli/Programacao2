#include "person.hpp"



int main()
{
    vector < personPF > listPF;
    vector < personPJ > listPJ;
    vector < string > listOfAll;

    if (LoadDatabase("database.dat", listPF , listPJ) == false)
    {
        cout << "Database file not found. Creating a new one" << endl;
        cout << endl;
    }
                  //menu em loop
    for(;;)
    {
        SaveDatabase("database.dat", listPF, listPJ);

        cout << "----------------------------------"  << endl;
        cout << "|    My papa's company - SIG      |" << endl;
        cout << " ----------------------------------" << endl;
        cout << "|1. Add individual                |" << endl;
        cout << "|2. Add legal entity              |" << endl;
        cout << "|3. Remove PF index               |" << endl;
        cout << "|4. Remove PJ Index               |" << endl;
        cout << "|5. Print Names in Ascending Order|" << endl;
        cout << "|6. Exit                          |" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Enter a option:"                     << endl;

        char op;
        cin >> op;
        cin.ignore(); // semelhante ao fflush em C


        if (op == '1') //Cadastro da pessoa fisica
            {
                personPF p;
                cout <<" Enter the name of the individual : " << endl;
                getline(cin, p.nome);
                cout <<" Enter the name of the mother : " << endl;
                getline(cin, p.nomeMae);
                cout <<" Enter the cpf: " << endl;
                getline(cin, p.cpf);
                cout <<" Enter the the addressal : " << endl;
                getline(cin, p.endereco);
                cout <<" Enter the phone number : " << endl;
                getline(cin, p.telefone);

                listPF.push_back(p);

            continue;
            }

        if (op == '2')
            {
                personPJ p;
                cout <<" Enter the company name : " << endl;
                getline(cin, p.razaoSocial);
                cout <<" Enter the cpj: " << endl;
                getline(cin, p.cnpj);
                cout <<" Enter the the addressal : " << endl;
                getline(cin, p.endereco);
                cout <<" Enter the phone number : " << endl;
                getline(cin, p.telefone);
                cout <<" Enter the share capital : " << endl;
                cin >> p.capitalSocial;

                listPJ.push_back(p);

             continue;
            }

        if (op == '3')
            {
                cout << "Remove PF Index:" << endl;

                size_t index;
                cin >> index;
                listPF.erase(listPF.begin() + index);

                SaveDatabase("database.dat", listPF, listPJ);

            continue;
            }

        if (op == '4')
            {
                cout << "Remove PJ Index:" << endl;

                size_t index;
                cin >> index;
                listPJ.erase(listPJ.begin() + index);

                SaveDatabase("database.dat", listPF, listPJ);

            continue;
            }

        if (op == '5')
            {
                vector < string > listaDeNomes;
                for (personPF current : listPF) listaDeNomes.push_back (current.nome);
                for (personPJ current : listPJ) listaDeNomes.push_back (current.razaoSocial);
                sort(listaDeNomes.begin(), listaDeNomes.end());
                cout << "Names in Ascending Order:" << endl;
                for (string current : listaDeNomes) cout << current << endl;


            continue;
            }

        if (op == '6')
            {
             break;
            }

    }

    return 0;
}
