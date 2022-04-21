#include <iostream>
#include <string.h>
#include <math.h>
 
using namespace std;
 
long long int tests;
unsigned long long int m, n;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> m >> n;
 
        //liczba palindromow
        unsigned long long int pal_quantity;
        pal_quantity=pow(2, m/2+m%2);
 
        string binary_num;
 
        int seeked_bits;
        seeked_bits=m/2+m%2;
 
        for(int i=0; i<seeked_bits; i++)
        {
            if(n>pal_quantity/2)
            {
                binary_num+="1";
                n-=pal_quantity/2;
            }
            else binary_num+="0";
 
            pal_quantity/=2;
        }
 
        string binary_num_mirror;
 
        for(int i=seeked_bits-1-m%2; i>=0; i--)
        {
            binary_num_mirror+=binary_num[i];
        }
 
        cout << stoull(binary_num+binary_num_mirror, nullptr, 2) << endl;
    }
 
    return 0;
}
