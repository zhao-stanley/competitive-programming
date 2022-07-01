//Codeforces Round #797 (Div. 3), problem: (A) Print a Pedestal

#include <iostream>
#include <math.h> 
using namespace std;
 
int main() {
    int testcases;
	int n;
    cin >> testcases;
    for (int i = 0; i < testcases; i++){
        int f = 0;
        int s = 0;
        int t = 0;
        cin >> n;
        f = (floor(n / 3)); 
        if (n % 3 == 0){
            f++;
        } else {
            f+=2;
        }
        if ((n-f) % 2 == 0)  {
            s = ((n-f) / 2.0) + 1; 
            t = ((n-f) / 2.0) - 1;
        } else {
            s = ((n-f) / 2.0) + 0.5; 
            t = ((n-f) / 2.0) - 0.5;
        }
        
        cout << s << " " << f << " " << t << endl;
    }
}

/*

f is the first pedestal, divide it by 3. if it's not divisible by 3, then we add 2 to it. 
if the remaining number after subtracting the first place pedestal is even, then dividing it by 2.0 as a double will give a whole number. 
then we just +/- 1 for second and third place respectively

if the remaining number is odd, then dividing it by 2.0 as a double will give a number ending in 0.5, in which case we +/- 0.5 to get second and third place

there are multiple suitable answers for certain inputs

*/