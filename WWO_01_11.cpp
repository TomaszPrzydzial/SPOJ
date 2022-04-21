#include <iostream>
#include <math.h>
 
using namespace std;
 
long long int exp_3[21];
 
void initialize_exp_3()
{
    exp_3[0]=1;
    exp_3[1]=3;
 
    for(int i=2; i<sizeof(exp_3)/sizeof(exp_3[0]); i++)
    {
        exp_3[i]=exp_3[i-1]*3;
        //cout << i << " = " << exp_3[i] << endl;
    }
}
 
int main()
{
    initialize_exp_3();
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        long long int n;
        cin >> n;
 
        int powers=0;
 
        for(int i=20; i>=0; i--)
        {
            if(n-exp_3[i]>=0)
            {
                n-=exp_3[i];
                powers++;
            }
        }
 
        cout << powers << endl;
    }
 
    return 0;
}
