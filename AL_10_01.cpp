#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    unsigned int tests, digits, sum;
    string code;
 
    cin >> tests;
 
    while(tests--)
    {
        cin >> digits >> code;
 
        sum=0;
 
        bool first_unknown;
        first_unknown=false;
        if(((int)code[0])==63) first_unknown=true;
 
        unsigned long long int result;
        result=0;
 
        for(int i=0; i<digits; i++) if(((int)code[i])==63) sum++;
 
        if(digits==0) cout << 0 << endl;
        else if(sum==0) cout << 1 << endl;
        else
        {
            if(first_unknown==true && digits>1)
            {
                //result=pow(10, sum-1)*9;
                cout << "9";
                for(int i=0; i<sum-1; i++) cout << "0";
                cout << endl;
            }
            else
            {
                //result=pow(10, sum);
                cout << "1";
                for(int i=0; i<sum; i++) cout << "0";
                cout << endl;
            }
 
        }
 
 
    }
 
    return 0;
}
