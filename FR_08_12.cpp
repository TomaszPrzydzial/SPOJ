#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        unsigned long long int n;
        int p;
 
        cin >> n >> p;
 
        int digits=1;
        unsigned long long int multiplier=p;
        unsigned long long int result=p-1
        ;
 
        while(result<n)
        {
            digits++;
            result+=(p-1)*multiplier;
            multiplier*=p;
        }
 
        cout << digits << endl;
    }
 
    return 0;
}
