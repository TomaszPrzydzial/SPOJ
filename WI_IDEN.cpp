#include <iostream>
#include <string.h>
 
using namespace std;
 
bool is_vowel(char letter)
{
    bool vowel = false;
    char vowels[] = {'a', 'A', 'e', 'E', 'i', 'I', 'y', 'Y', 'u', 'U', 'o', 'O'};
 
    for(int i=0; i<sizeof(vowels)/sizeof(vowels[0]); i++)
    {
        if(letter==vowels[i])
        {
             vowel=true;
             break;
        }
    }
 
    return vowel;
}
 
void trim_special_signs(string *name, int n)
{
    for(int i=(*name).length()-1; i>=0; i--)
    {
        if((*name).length()>n)
        {
            if((int)(*name)[i]==95) (*name).erase(i,1);
        }
        else break;
    }
 
    return;
}
 
void trim_digits(string *name, int n)
{
    for(int i=(*name).length()-1; i>=0; i--)
    {
        if((*name).length()>n)
        {
            if((int)(*name)[i]>=48 && (int)(*name)[i]<=57) (*name).erase(i,1);
        }
        else break;
    }
 
    return;
}
 
void trim_vowels(string *name, int n)
{
    bool first_vowel=true;
    string temp_name;
 
    for(int i=0; i<(*name).length(); i++)
    {
        if((*name).length()>n)
        {
            if(!is_vowel((*name)[i])) temp_name+=(*name)[i];
            else if(first_vowel)
            {
               temp_name+=(*name)[i];
               first_vowel=false;
            }
        }
        else break;
    }
 
    *name = temp_name;
 
    return;
}
 
void trim_to_n(string *name, int n)
{
    for(int i=(*name).length()-2; i>=0; i--)
    {
        if((*name).length()>n)
        {
            (*name).erase(i,1);
        }
        else break;
    }
 
    return;
}
 
int main()
{
    unsigned short int max_n;
    string var_name;
 
    cin >> max_n >> var_name;
 
    trim_special_signs(&var_name, max_n);
    trim_digits(&var_name, max_n);
    trim_vowels(&var_name, max_n);
    trim_to_n(&var_name, max_n);
 
    cout << var_name << endl;
 
    return 0;
}
