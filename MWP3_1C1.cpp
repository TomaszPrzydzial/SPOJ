#include <iostream>
#include <math.h>
 
using namespace std;
 
 
long int ile_zestawow;
long long int num_a, num_b;
 
long long int wyznacz_NWD(long long a, long long b)
{
    long long int reszta;
 
    do
    {
        reszta=a%b;
 
        if(reszta!=0)
        {
            a=b;
            b=reszta;
        }
 
    } while (reszta!=0);
 
    return b;
}
 
bool is_prime(long long number)
{
    bool is_prime=true;
 
    for (int i=2; i<=sqrt(number); i++)
    {
        if(number%i==0) is_prime=false;
    }
 
    return is_prime;
}
 
 
int main()
{
    cin >> ile_zestawow;
 
 
    for(int i=0; i<ile_zestawow; i++)
    {
        cin >> num_a >> num_b;
 
 
        if (num_a!=num_b) cout << wyznacz_NWD(num_a, num_b) << "\n";
        else if (is_prime(num_a)==1) cout << 1 << "\n";
        else
        {
            int dzielnik = 2;
 
            while(num_a%dzielnik!=0)
            {
                dzielnik++;
            }
 
            cout << num_a/dzielnik << "\n";
        }
 
 
    }
 
    return 0;
}
