#include <iostream>
#include <math.h>
 
using namespace std;
 
int factorization(int n)
{
    if(n==1) return 1;
    
    int dividers=1;
 
    int sq_root = sqrt(n);
 
    int k=2;
    int counter=1;
 
    while(n>1 && k<=sq_root)
    {
        while(n%k==0)
        {
            n/=k;
            counter++;
        }
        k++;
        dividers*=counter;
        counter=1;
    }
 
    if(n>1) dividers*=2;
    if(dividers==1) dividers=2;
 
    return dividers;
}
 
int main()
{
    int number;
    cin >> number;
 
    if(factorization(number)%2==0) cout << "NIE";
    else cout << "TAK";
 
    cout << endl;
 
    return 0;
}
