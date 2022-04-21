#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    short int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        string math_exprn;
 
        cin >> math_exprn;
 
        int actual_number = 0;
        int sum = 0;
        int dec_multiplier = 1;
 
        for(int i=math_exprn.length()-1; i>=-1; i--)
        {
            if(math_exprn[i]>=48 && math_exprn[i]<=57)
            {
                actual_number += (math_exprn[i]-48)*dec_multiplier;
                dec_multiplier *= 10;
            }
            else
            {
                switch(math_exprn[i])
                {
                    case '-':
                    sum -= actual_number;
                    break;
 
                    default:
                    sum += actual_number;
                    break;
                }
 
                actual_number = 0;
                dec_multiplier = 1;
            }
        }
 
        cout << sum << endl;
 
    }
 
    return 0;
}
