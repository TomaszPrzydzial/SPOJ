#include <iostream>
#include <math.h>
 
using namespace std;
 
int testy;
unsigned long long pole;
 
int main()
{
    cin >> testy;
 
    while(testy--)
    {
        cin >> pole;
 
        int bok_A, bok_B;
 
            bok_A = sqrt(pole);
 
            while(pole%bok_A) bok_A--;
 
            bok_B = pole/bok_A;
 
        cout << bok_A*2+bok_B*2 << endl;
 
 
 
    }
 
}
