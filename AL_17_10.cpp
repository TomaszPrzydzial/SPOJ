#include <iostream>
 
using namespace std;
 
bool num_is_valid(string num_str, int base)
{
    for(int i=0; i<num_str.length(); i++)
    {
        int digit=num_str[i];
        if(digit>=48 && digit<=57) digit=digit-48;
        else if(digit>=65 && digit<= 70) digit=digit-55;
 
        if(digit>=base) return false;
    }
 
    return true;
}
 
long long int calculate_decimal(string num_str, int base)
{
    long long int dec_num=0;
    long long int multiplier=1;
 
    for(int i=num_str.length()-1; i>=0; i--)
    {
        int digit=num_str[i];
        if(digit>=48 && digit<=57) digit=digit-48;
        else if(digit>=65 && digit<= 70) digit=digit-55;
 
        dec_num+=multiplier*digit;
        multiplier*=base;
    }
 
    return dec_num;
}
 
int main()
{
    string a, b, c;
 
    while(cin >> a >> b >> c)
    {
        for(int i=2; i<=16; i++)
        {
            if(num_is_valid(a, i) && num_is_valid(b, i) && num_is_valid(c, i))
            {
                if(calculate_decimal(a, i)*calculate_decimal(b, i)==calculate_decimal(c, i)) cout << i << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}
