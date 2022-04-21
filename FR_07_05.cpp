#include <iostream>
#include <iomanip>
 
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
    int res_x, res_y;
    cin >> res_x >> res_y;
 
    //make picture array
    string** picture = new string* [res_x];
    for(int i=0; i<res_x; i++) picture[i] = new string [res_y];
 
    //get original picture
    for(int i=0; i<res_y; i++)
    {
        for(int k=0; k<res_x; k++)
        {
            string color;
            cin >> color;
            picture[k][i] = color;
        }
    }
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int similar_pixels=0;
 
        for(int i=0; i<res_y; i++)
        {
            for(int k=0; k<res_x; k++)
            {
                string color;
                cin >> color;
 
                int oR, oG, oB, pR, pG, pB;
                oR = convert_from_hex(picture[k][i].substr(1, 2));
                oG = convert_from_hex(picture[k][i].substr(3, 2));
                oB = convert_from_hex(picture[k][i].substr(5, 2));
 
                pR = convert_from_hex(color.substr(1, 2));
                pG = convert_from_hex(color.substr(3, 2));
                pB = convert_from_hex(color.substr(5, 2));
 
                int dR, dG, dB;
                dR=abs(oR-pR);
                dG=abs(oG-pG);
                dB=abs(oB-pB);
 
                if(dR+dG+dB<=5) similar_pixels++;
            }
        }
 
        cout << setprecision(2) << double(similar_pixels)/double(res_x*res_y) << endl;
    }
 
 
 
    return 0;
}
