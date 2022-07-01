//Codeforces Beta Round #65 (Div. 2), problem: (A) Way Too Long Words

#include <iostream>
#include <string>
using namespace std;
 
 
int main()
{
    int numLines;
    string word;
    cin >> numLines;
    for (int i = 0; i < numLines; i++){
        cin >> word;
        (word.length() > 10) ? (cout << word.at(0) << word.length()-2 << word.at(word.length() - 1) << endl) : cout << word << endl;
    }
}

/*

if word length is > 10, we'll print out the first letter, then the length of the entire word (minus the first and last letter), 
and then the final letter. otherwise just print the word.

*/