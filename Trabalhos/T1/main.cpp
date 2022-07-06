#include "funcao.hpp"


int main()
{   int i;

    vector < vector < string > > list0fDicts;
    vector  < string > list0fDictsNames;
    vector < string > wordlist;

      for (;;)
    {   cout << endl;
        cout << " ---------------------------" << endl;
        cout << "|DICTIONARY MANIPULATOR HACK|"<< endl;
        cout << " ---------------------------" << endl;
        cout << "     Select an option:"       << endl;
        cout << " ---------------------------" << endl;
        cout << "1. Open Dictionary…" << endl;
        cout << "2. Search Substrings..." << endl;
        cout << "3. Remove Words Containing Substring..." << endl ;
        cout << "4. Show Statistics" << endl;
        cout << "5. Exit" << endl ;
        cout << " ---------------------------" << endl;

        cout << "Option: " <<endl ;
        char op;
        cin >> op;



        if(op == '1')
        {
            cout << "Enter a dictionary file: ";
            string path;
            cin >> path;
            vector < string > wordlist;

              if(!LoadDictionary(path, wordlist))
                {  cout << endl;
                   cout << "Erro, arquivo não encontrado" << endl;
                   continue;
                }
                else
                {   cout << endl;
                    cout << "Arquivo encontrado" << endl;
                  list0fDicts.push_back(wordlist);
                  list0fDictsNames.push_back(path);
                }
        continue;

        }

        if(op == '2')
        {
            cout << "Enter a substring to search: ";
            string query;
            cin >> query;
            cout << endl;
            vector < string > substrlist = SearchSubstrings(wordlist, query);

                 for(size_t i=0; i<substrlist.size(); i++)
               {
                  cout << substrlist.at(i) << "-> " << substrlist.at(i).length() << endl;
               }


        continue;
        }

        if(op == '3')
        {
            cout << " Enter the substring to be removed: ";
            string removed;
            cin >> removed;
            cout << endl;
            DelSubstrings( list0fDicts, removed);
            continue;
        }


        if(op == '4')
        {
            cout << " The statistics are: " << endl;
            for (size_t i=0; i < list0fDicts.size(); i++ )
            {
              cout << list0fDictsNames.at(i) << " -> " << list0fDicts.at(i).size() << "Word(s)" << endl;

            }
            continue;
        }

        if(op == '5')
        {
            break;

        }

    if(op == '6')
        {
            for(size_t i=0; i < list0fDicts.size(); i++)
            {
              //  cout << list0fDictsNames.at(i) << endl;
                for(size_t j=0; j < list0fDicts.at(i).size(); j++)
                {
                    cout << list0fDicts.at(i).at(j) << endl;
                }
                cout << endl;
            }
            continue;
        }
    return 0;
}

}
