#include "funcao.hpp"


//op1:
bool LoadDictionary(string path, vector < string > &wordlist)
{
    //this is a ifstream instance to read our dictionary file
    ifstream filereader;
    filereader.open(path);

    if(filereader.is_open() == false)
        return false;

    //reading list of words
    string tmp;
    while(getline(filereader, tmp))
    {

        wordlist.push_back(tmp);
    }

    wordlist.erase(wordlist.begin()+0);

    return true;
}

//op2:

vector< string > SearchSubstrings(const vector < string > &wordlist, string query)
{
    vector< string > substrlist;

    for(size_t i=0; i<wordlist.size(); i++)
    {
        string word = wordlist.at(i);
        size_t pos = word.find(query);
        if(pos < word.length())
        {
            substrlist.push_back(word);
        }
    }
    return substrlist;
}

//op3

void DelSubstrings(vector < vector < string > > &list0fDicts, string removed)
{

    for( int i=0; i < list0fDicts.size(); i++)
    {
           for( int j=0; j< list0fDicts[i].size(); j++)
         {
            string word = list0fDicts[i][j];
            size_t pos = word.find(removed);
            if(pos != string::npos)
             {
                list0fDicts[i].erase(list0fDicts[i].begin()+j);
                j--;
             }
         }
    }
return;
}

