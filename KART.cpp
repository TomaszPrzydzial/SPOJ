#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    unsigned int five_pow[12];
 
    for(int i=0; i<13; i++)
    {
        five_pow[i] = pow(5, i+1);
    }
 
    unsigned int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        unsigned int number;
 
        cin >> number;
 
        unsigned int zero_quantity = 0;
 
        for(int i=0; i<13; i++)
        {
            zero_quantity += number/five_pow[i];
        }
 
        cout << zero_quantity << endl;
    }
 
    return 0;
}
