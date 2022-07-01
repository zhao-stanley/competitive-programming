//Codeforces Round #143 (Div. 2), problem: (A) Team

#include <iostream>
using namespace std;
 
int main() {
    int numLines;
	int problemsImp = 0;
    int p, v, t;
	cin >> numLines;
	for (int i = 0; i < numLines; i++){
        cin >> p >> v >> t;
        if (p + v + t >= 2){
            problemsImp++;
        }
    }
    cout << problemsImp;
}

/*

if a line adds up to two or more, that means the problem can be implemented

*/