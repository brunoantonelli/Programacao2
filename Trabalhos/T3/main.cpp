#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

bool mysorterfunction(const pair< size_t, size_t > &p1, const pair< size_t, size_t > &p2)
{
    return (p1.second > p2.second);
}

int main()
{
    //lendo o arquivo com o texto criptografado
    cout << "Entre com o manuscrito  criptografado a ser desencriptografado: ";
    string pathManusc;
    cin >> pathManusc;

    ifstream frManusc(pathManusc);
    stringstream manuscriptStr;
    if(!frManusc.is_open())
    {
        cout << "Error, manuscript file not found" << endl;
        return 2;
    }
    else
    {
        char ch;
        while(frManusc.get(ch))
        {
            manuscriptStr << ch;
        }
    }
    cout << manuscriptStr.str() << endl;

    int num;

    //computing the characters frequency of the manuscript
    vector < pair< size_t, size_t > > frequencyList;
    for(size_t i=0; i<256; i++)
    {
        pair< size_t, size_t > p;
        p.first = i;
        p.second = 0;
        frequencyList.push_back(p);
    }
    for(size_t i=0; i<manuscriptStr.str().size(); i++)
    {
        char ch = manuscriptStr.str().at(i);
        frequencyList.at(ch).second++;
    }

    //sort and remove elements with zero frequency
    stable_sort(frequencyList.begin(), frequencyList.end(), mysorterfunction);
    for(size_t i=0; i<frequencyList.size(); i++)
    {
        if(frequencyList.at(i).second == 0)
        {
            frequencyList.erase(frequencyList.begin()+i, frequencyList.end());
        }
    }
    for(size_t i=0; i<frequencyList.size(); i++)
    {
        cout << frequencyList.at(i).second << " -> " << (char) frequencyList.at(i).first << " "  << endl;

    }
     cout << endl;

vector < int > BaseList {65,130,134,144,138,148,147,143,149,142,133,132,141,150,136,145,77,135,137,151,66,140,146,132,155,76,130,131,66,142};
char cond;
for(;;)
        {
            int num,k;
            char aux;

            for(size_t i=0; i<BaseList.size(); i++)
                            {
                                cout << BaseList.operator[](i) << " -> " << (char) BaseList.at(i) << endl;
                            }
                    cout << endl;

            cout << " Voce deseja incrementar ou decrementar (i/d) ?: " <<endl;
            cin  >> aux;

                if(aux == 's')
                {
                    cout << "Entre com um valor de 0 a 50 a ser incrementado: " <<endl;
                    cin  >> num;

                        for(size_t i=0; i<BaseList.size(); i++)
                                {
                                BaseList.at(i)= BaseList.at(i) + num;
                                cout << BaseList.at(i) << " -> " << (char) BaseList.at(i) << endl;
                                }
                                cout << endl;
                }
                if(aux == 'd')
                    {
                        cout << "Entre com um valor de 0 a 50 a ser decrementado: " <<endl;
                        cin  >> num;

                    for(size_t i=0; i<BaseList.size(); i++)
                            {
                                BaseList.at(i)= BaseList.at(i) - num;
                                cout << BaseList.at(i) << " -> " << (char) BaseList.at(i) << endl;
                            }
                             cout << endl;
                    }
            cout << endl;
            cout << "deseja continuar ? (s/n)" << endl;
            cin >> cond;
                if (cond == 'n')
                    {
                        break;
                    }
        }

    //connecting alphabet and frequency list


    for(size_t i=0; i<frequencyList.size(); i++)
    {
        frequencyList.at(i).second = (int) BaseList.at(i);
    }

   cout <<"A mensagem encriptografada era:" << endl;
   cout << endl;
   cout << manuscriptStr.str() << endl;
   cout << endl;
   cout << "A mensagem descriptografada é:" << endl;
   cout << endl;
    //convert manuscript to codes
    for(size_t i=0; i<manuscriptStr.str().size(); i++)
    {
        char ch = manuscriptStr.str().at(i);
        for(size_t j=0; j<frequencyList.size(); j++)
        {
            if(ch == frequencyList.at(j).first)
            {
                cout << (char) frequencyList.at(j).second;
                break;
            }
        }
    }
    cout << endl;


    return 0;
}
