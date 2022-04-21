#include <iostream>
 
using namespace std;
 
string convert_to_romanian(int num)
{
    int number_tab[4];
    string romanian_tab[4];
    string romanian_char[7]={"M", "D", "C", "L", "X", "V", "I"};
    int multiplier=10;
 
    for(int i=0; i<4; i++)
    {
        number_tab[3-i]=(num%multiplier)/(multiplier/10);
        multiplier*=10;
    }
 
    for(int i=0; i<number_tab[0]; i++) romanian_tab[0]+=romanian_char[0];
 
    for(int i=1; i<4; i++)
    {
        int median_char=i*2-1;
        //cout << romanian_char[i] << endl;
 
        if(number_tab[i]==5) romanian_tab[i]+=romanian_char[median_char];
        else if(number_tab[i]==9) romanian_tab[i]+=romanian_char[median_char+1]+romanian_char[median_char-1];
        else if(number_tab[i]==4) romanian_tab[i]+=romanian_char[median_char+1]+romanian_char[median_char];
        else if(number_tab[i]>5)
        {
            romanian_tab[i]+=romanian_char[median_char];
            for(int k=0; k<number_tab[i]-5; k++) romanian_tab[i]+=romanian_char[median_char+1];
        }
        else if(number_tab[i]<5)
        {
            for(int k=0; k<number_tab[i]; k++) romanian_tab[i]+=romanian_char[median_char+1];
        }
    }
 
    return romanian_tab[0]+romanian_tab[1]+romanian_tab[2]+romanian_tab[3];
}
 
int convert_to_arabian(string r_num)
{
    int arabian_num=0;
    int multiplier=1000;
    int position=0;
    string term_chars[4]={"MDC", "CLX", "XVI"};
 
    for(int i=0; i<r_num.length(); i++)
    {
        if(r_num[i]=='X' || r_num[i]=='L') {position=1; multiplier=100;}
        if(r_num[i]=='I' || r_num[i]=='V') {position=2; multiplier=10;}
 
        if(r_num[i]==term_chars[position][2] && r_num[i+1]==term_chars[position][0]) {arabian_num+=multiplier-(multiplier/10), i++;}
        else if(r_num[i]==term_chars[position][2] && r_num[i+1]==term_chars[position][1]) {arabian_num+=multiplier/2-(multiplier/10), i++;}
        else if(r_num[i]==term_chars[position][2]) arabian_num+=multiplier/10;
        else if(r_num[i]==term_chars[position][1]) arabian_num+=multiplier/2;
        else if(r_num[i]==term_chars[position][0]) arabian_num+=multiplier;
    }
 
    return arabian_num;
}
 
int main()
{
    string roma_A, roma_B;
 
    while(cin >> roma_A >> roma_B)
    {
        int decimal_A, decimal_B;
 
        decimal_A=convert_to_arabian(roma_A);
        decimal_B=convert_to_arabian(roma_B);
 
        cout << convert_to_romanian(decimal_A+decimal_B) << endl;
    }
 
    return 0;
}
