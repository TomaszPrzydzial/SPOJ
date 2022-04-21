#include <iostream>
#include <string.h>
#include <math.h>
 
using namespace std;
 
unsigned long long int dec_number;
 
string convert_to_bin(unsigned long long int dec_number)
{
    string binary_word;
 
    int reminder;
    int i=1;
 
    while(dec_number!=0)
    {
        reminder = dec_number%2;
        dec_number/=2;
 
        binary_word=to_string(reminder)+binary_word;
    }
 
    return binary_word;
}
 
unsigned long long int convert_to_dec(string bin_number)
{
    unsigned long long int dec_number=0;
    unsigned long long int multiplier=1;
 
    while(bin_number.length()!=0)
    {
        if(bin_number[bin_number.length()-1]=='1') dec_number+=multiplier;
 
        bin_number.erase(bin_number.end()-1);
        multiplier*=2;
 
 
    }
 
    return dec_number;
}
 
 
int main()
{
    while(cin >> dec_number)
    {
        string bin_number;
        bin_number=convert_to_bin(dec_number);
 
        for(int i=0; i<bin_number.length()/2; i++)
        {
            swap(bin_number[i], bin_number[bin_number.length()-1-i]);
        }
 
        cout << convert_to_dec(bin_number) << endl;
    }
 
    return 0;
}
