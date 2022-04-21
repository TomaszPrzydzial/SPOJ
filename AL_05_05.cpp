#include <iostream>
#include <math.h>
 
using namespace std;
 
unsigned long long int a, b, sp, sk;
 
unsigned long long int get_GCD(int a, int b)
{
    int rest;
 
    do
    {
        rest=a%b;
 
        if(rest!=0)
        {
            a=b;
            b=rest;
        }
 
    } while (rest!=0);
 
    return b;
}
 
unsigned long long int get_LCM(int a, int b)
{
    return (a/get_GCD(a, b))*b;
}
 
int main()
{
    cin >> a >> b;
 
    while(cin >> sp >> sk)
    {
        int result=0;
 
        int A, B;
 
        A=sk/a - (sp-1)/a;
        B=sk/b - (sp-1)/b - (sk/get_LCM(a, b)-(sp-1)/get_LCM(a, b));
 
        cout << A+B << endl;
    }
 
    return 0;
 
}
