//Codeforces Round #304 (Div. 2), problem: (A) Soldier and Bananas

#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int initCost, bal, numB;
    int cost = 0;
	cin >> initCost >> bal >> numB;
	for (int i = 1; i <= numB; i++){
        cost += initCost * i;
    }
    if (cost <= bal) {
        cout << 0 << endl;
    } else {
    cout << cost - bal;
    }
}

//definitely a more efficient solution