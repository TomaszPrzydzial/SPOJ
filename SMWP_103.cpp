#include <iostream>
#include <math.h>
 
using namespace std;
 
long int tests, number;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> number;
 
        double number_sqrt=sqrt(number);
        if(number_sqrt-trunc(number_sqrt)==0 && number>=1) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
 
 
    return 0;
}
