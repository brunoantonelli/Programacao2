#ifndef FUNCAO_HPP_INCLUDED
#define FUNCAO_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

bool LoadDictionary(string path, vector< string > &wordlist);

vector < string > SearchSubstrings(const vector< string > &wordlist, string query);

void DelSubstrings( vector < vector< string > > &list0fDicts, string removed);


#endif // FUNCAO_HPP_INCLUDED
