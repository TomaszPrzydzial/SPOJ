#include <iostream>
 
using namespace std;
 
int x_base_to_dec(int base, string num_s)
{
    int result=0;
    int multiplier=1;
 
    for(int i=num_s.length()-1; i>=0; i--)
    {
        result+=multiplier*(num_s[i]-'0');
        multiplier*=base;
        multiplier%=1010101;
        result%=1010101;
    }
 
    return result;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int base;
        string num_string;
 
        cin >> base >> num_string;
 
        cout << x_base_to_dec(base, num_string) << endl;
    }
 
    return 0;
}
