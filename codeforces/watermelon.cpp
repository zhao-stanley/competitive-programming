//Codeforces Beta Round #4 (Div. 2 Only), problem: (A) Watermelon

#include <iostream>
using namespace std;
 
int main() {
	int weight;
	cin >> weight;
	if (weight % 2 == 0 && weight > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

//must be a way to optimize this even further :shrug: