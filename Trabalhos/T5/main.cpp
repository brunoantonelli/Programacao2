#include "header.hpp"
#include "Voo.hpp"
#include <string.h>
int main()
{
     string nome;

    //criando passageiro
    Voo* v1 = new Voo(1,"New York","Joao","TAM");
    Voo* v2 = new Voo(2,"Tokio","Jucelino","GOL");
    Voo* v3 = new Voo(3,"USA","James","American airlines");
    Voo* v4 = new Voo(4,"Chile","Levi","AZUL");
    Voo* v5 = new Voo(5,"London","Clarisse","LATAM");

    //criando passageiros
    Passageiro p1(v1,"Bruno Oliveira");
    Passageiro p2(v2,"Alicia Moraes");
    Passageiro p3(v3,"Arnaldo Junior");
    Passageiro p4(v4,"Jose Silva");
    Passageiro p5(v5,"Tomas Pereira");

    //criando passagem
    Passagem pa1(v1,200);
    Passagem pa2(v1,300);
    Passagem pa3(v1,400);
    Passagem pa4(v1,600);
    Passagem pa5(v1,399);

    //criar poltrona
    Poltrona po1(v1,1);
    Poltrona po2(v1,2);
    Poltrona po3(v1,3);
    Poltrona po4(v1,4);
    Poltrona po5(v1,5);


    for(;;)
    {
        cout << "    ###############################" << endl;
        cout << "    ##    Aeroporto Antonelli    ##" << endl;
        cout << "    ###############################" << endl;
        cout << "    ##   *SELECIONE O SEU VOO*   ##" << endl;
        cout << "    ###############################" << endl;
        cout << "    ## 1- New York               ##" << endl;
        cout << "    ## 2- Tokio                  ##" << endl;
        cout << "    ## 3- USA                    ##" << endl;
        cout << "    ## 4- Chile                  ##" << endl;
        cout << "    ## 5- London                 ##" << endl;
        cout << "    ## 6- EXIT                   ##" << endl;
        cout << "    ###############################" << endl;

        int op;
        cin  >> op;
        cin.ignore();

    if(op == 1)
        {
        cout << "    ################################" << endl;
        cout << "    ##         New York           ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ##   *SELECIONE SUA OPCAO*    ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ## 1- Ver passageiros no voo  ##" << endl;
        cout << "    ## 2- Conferir valor passagem ##" << endl;
        cout << "    ## 3- Conferir poltrona       ##" << endl;
        cout << "    ## 4- Info do voo             ##" << endl;
        cout << "    ################################" << endl;
        cout << endl;

        int opA;
        cin >> opA;
        cout << endl;
            if(opA == 1)
            {
                cout <<"Os passageiros no voo de New York sao: " << endl;
                cout <<"Passageiro: " << p1.GetNameofPass() <<endl;
            }

            if(opA == 2)
            {
               cout << "O valor da passagem e: " << pa1.GetPassagem() << endl;
               string nome;
               getline(cin,nome);
            }

            if(opA == 3)
            {
                cout << "A poltrona do Passageiro " << p1.GetNameofPass()<<" e : " << po1.SetPoltrona() << endl;
            }

            if(opA == 4)
            {
                cout << "As informacoes do voo sao: " << endl;
                v1->GetInfoVoo();
            }
        continue;
        }

    if(op == 2)
        {
        cout << "    ################################" << endl;
        cout << "    ##           Tokio            ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ##   *SELECIONE SUA OPCAO*    ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ## 1- Ver passageiros no voo  ##" << endl;
        cout << "    ## 2- Conferir valor passagem ##" << endl;
        cout << "    ## 3- Conferir poltrona       ##" << endl;
        cout << "    ## 4- Info do voo             ##" << endl;
        cout << "    ################################" << endl;
        cout << endl;

        int opB;
        cin >> opB;
        cout << endl;

            if(opB == 1)
            {
                cout <<"Os passageiros no voo de Tokio sao: " << endl;
                cout <<"Passageiro: " << p2.GetNameofPass() <<endl;
            }

            if(opB == 2)
            {
               cout << "O valor da passagem e: " <<pa2.GetPassagem() << endl;

            }

            if(opB == 3)
            {
                cout << "A poltrona do Passageiro " << p2.GetNameofPass()<<" e : " << po2.SetPoltrona() << endl;
            }

            if(opB == 4)
            {
              cout << "As informacoes do voo sao: " << endl;
              v2->GetInfoVoo();
            }
        continue;
        }

    if(op == 3)
        {
        cout << "    ################################" << endl;
        cout << "    ##            USA             ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ##   *SELECIONE SUA OPCAO*    ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ## 1- Ver passageiros no voo  ##" << endl;
        cout << "    ## 2- Conferir valor passagem ##" << endl;
        cout << "    ## 3- Conferir poltrona       ##" << endl;
        cout << "    ## 4- Info do voo             ##" << endl;
        cout << "    ################################" << endl;
        cout << endl;

        int opC;
        cin >> opC;
        cout << endl;
        if(opC == 1)
            {
                cout <<"Os passageiros no voo de USA sao:  " << endl;
                cout <<"Passageiro: " << p3.GetNameofPass() <<endl;
            }

        if(opC == 2)
            {
               cout << "O valor da passagem e: " << pa3.GetPassagem() << endl;
            }

        if(opC == 3)
            {
                cout << "A poltrona do Passageiro " << p3.GetNameofPass()<<" e : " << po3.SetPoltrona() << endl;
            }

            if(opC == 4)
            {
              cout << "As informacoes do voo sao: " << endl;
              v3->GetInfoVoo();
            }
      continue;
        }

    if(op == 4)
        {
        cout << "    ################################" << endl;
        cout << "    ##            Chile           ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ##   *SELECIONE SUA OPCAO*    ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ## 1- Ver passageiros no voo  ##" << endl;
        cout << "    ## 2- Conferir valor passagem ##" << endl;
        cout << "    ## 3- Conferir poltrona       ##" << endl;
        cout << "    ## 4- Info do voo             ##" << endl;
        cout << "    ################################" << endl;
        cout << endl;

        int opD;
        cin >> opD;
        cout << endl;
        if(opD == 1)
            {
                cout <<"Os passageiros no voo de Chile sao: " << endl;
                cout <<"Passageiro: " << p4.GetNameofPass() <<endl;
            }

        if(opD == 2)
            {
               cout << "O valor da passagem e: " << pa4.GetPassagem() << endl;
            }
        if(opD == 3)
            {
                cout << "A poltrona do Passageiro " << p4.GetNameofPass()<<" e : " << po4.SetPoltrona() << endl;
            }

        continue;

        if(opD == 4)
            {
                cout << "As informacoes do voo sao: " << endl;
                v4->GetInfoVoo();
            }
        }
    if(op == 5)
        {
        cout << "    ################################" << endl;
        cout << "    ##            London          ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ##   *SELECIONE SUA OPCAO*    ##" << endl;
        cout << "    ################################" << endl;
        cout << "    ## 1- Ver passageiros no voo  ##" << endl;
        cout << "    ## 2- Conferir valor passagem ##" << endl;
        cout << "    ## 3- Conferir poltrona       ##" << endl;
        cout << "    ## 4- Info do voo             ##" << endl;
        cout << "    ################################" << endl;
        cout << endl;

        int opE;
        cin >> opE;
        cout << endl;
        if(opE == 1)
            {
                cout <<"Os passageiros no voo de USA: " << endl;
                cout <<"Passageiro: " << p5.GetNameofPass() <<endl;
            }

        if(opE == 2)
            {
               cout <<  "O valor da passagem e: " << pa5.GetPassagem() << endl;
            }
        if(opE == 3)
            {
                cout << "A poltrona do Passageiro " << p5.GetNameofPass()<<" e : " << po5.SetPoltrona() << endl;
            }

        if(opE == 4)
        {
         cout << "As informacoes do voo sao: " << endl;
         v5->GetInfoVoo();
        }
        continue;
        }

    if(op == 6)
     {
        break;
     }


  }
  delete v1;
  delete v2;
  delete v3;
  delete v4;
  delete v5;


return 0;
}
