#include <iostream>
 
using namespace std;
 
char hex_table[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
 
int convert_from_hex(string hex_string)
{
    int dec_number=0;
    int multiplier=1;
 
    for(int i=hex_string.length()-1; i>=0; i--)
    {
        for(int k=0; k<16; k++)
        {
            if(hex_string[i]==hex_table[k])
            {
                dec_number+=k*multiplier;
                break;
            }
        }
 
        multiplier*=16;
    }
 
    return dec_number;
}
 
int main()
{
    string code;
    getline(cin, code);
 
    for(int i=0; i<code.length(); i+=7)
    {
        int letter_code=0;
 
        for(int k=0; k<3; k++) letter_code+=convert_from_hex(code.substr(i+1+k*2, 2));
 
        cout << char(letter_code);
    }
 
    return 0;
}
