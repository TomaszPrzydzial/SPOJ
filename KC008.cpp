#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    string math_exprn;
    long long int final_sum = 0;
 
    while(getline(cin, math_exprn))
    {
        if(math_exprn[0]==NULL) break;
 
        long long int actual_number = 0;
        long long int sum = 0;
        long long int dec_multiplier = 1;
 
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
        final_sum += sum;
    }
 
    cout << final_sum << endl;
 
    return 0;
}
