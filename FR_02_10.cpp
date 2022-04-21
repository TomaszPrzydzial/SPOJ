#include <iostream>
#include <math.h>
 
using namespace std;
 
string revert_string(string str)
{
    string reverted_str;
    for(int i=str.length()-1; i>=0; i--) reverted_str+=str[i];
    return reverted_str;
}
 
string scale_string(string str, int scale)
{
    string scaled_str;
 
    for(int i=0; i<str.length()-1; i++)
    {
        scaled_str+=str[i];
        for(int k=0; k<scale-1; k++) scaled_str+=" ";
    }
    scaled_str+=str[str.length()-1];
 
    return scaled_str;
}
 
int main()
{
    string text;
    int tests, scale;
    cin >> text >> tests;
 
    while(tests--)
    {
        cin >> scale;
        
        string text_to_print=text;
 
        if(scale<0) text_to_print = revert_string(text_to_print);
 
        scale = abs(scale);
 
        if(scale==0) cout << text_to_print[text_to_print.length()-1];
        else if(scale==1) cout << text_to_print;
        else cout << scale_string(text_to_print, scale); 
        
        if(tests>0) cout << endl;
    }
 
    return 0;
}
