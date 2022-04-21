#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        unsigned int num;
        int result=1;
 
        cin >> num;
 
        for(int i=2; i<=num; i++)
        {
            result=result*i;
 
            if(result%10==0)
            {
                result/=10;
                result%=10000;
            }
            else
            {
               result%=10000;
            }
        }
 
        string num_string = to_string(result);
 
        for(int i=num_string.length()-1; i>=0; i--)
        {
            if(num_string[i]!='0')
            {
                cout << num_string[i] << endl;
                break;
            }
        }
    }
 
    return 0;
}
