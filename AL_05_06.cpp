#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned long long int types, n, q, sum;
 
    while(cin >> types)
    {
        n=1;
        q=1;
        sum=0;
 
        while(types!=0)
        {
            if(9*n*q<=types)
            {
                sum += 9*q;
                types -= 9*n*q;
 
                q *= 10;
                n++;
            }
            else
            {
                sum+=types/n;
                types=0;
            }
        }
 
        cout << sum << endl;
    }
 
    return 0;
}
