#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
long long int get_GCD(long long int a, long long int b)
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
 
long long int get_LCM(long long int a, long long int b)
{
    return (a/get_GCD(a, b))*b;
}
 
int main()
{
    long long int a, b, c, s;
    cin >> a >> b >> c >> s;
 
    long long int result=(double)s/((double)get_LCM(a, get_LCM(b, c))/100);
 
    if(result>=1) cout << setprecision(20) << floor(result);
    else cout << "0";
    cout << endl;
 
    return 0;
}
