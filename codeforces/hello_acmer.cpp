//The 2022 Hangzhou Normal U Summer Trials, problem: (A) Hello, ACMer!

#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string input;
    int count = 0;
	cin >> input;
        size_t nPos = input.find("hznu", 0);
        while(nPos != string::npos)
        {
            count++;
            nPos = input.find("hznu", nPos + 1);
        }
        cout << count;
}

/*

- size_t is an integer type, apparently more efficient?
- npos is the end of the string, iterate til the end of the string

*/