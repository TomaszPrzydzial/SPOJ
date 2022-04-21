#include <iostream>
#include <string.h>
#include <math.h>
 
using namespace std;
 
char input[1000001];
char *pointer;
 
int letters_tab[26];
int letters_total;
 
int main()
{
    pointer = &input[0];
 
    while(cin.getline(input, sizeof(input)))
    {
 
        for(int i=0; i<sizeof(input); i++)
        {
            int temp_code=(int)(*(pointer+i));
 
            if(temp_code>=65 && temp_code<=90)
            {
                letters_tab[temp_code-65]++;
                letters_total++;
            }
 
        }
 
 
        for(int i=0; i<26; i++)
        {
            cout << (char)(i+65);
 
            double percent=double(letters_tab[i])/double(letters_total)*100;
 
            for(int i=0; i<round(percent); i++)
            {
                cout << "*";
            }
 
            cout << endl;
        }
 
 
    memset(input, 0, sizeof(input));
    }
 
 
 
    return 0;
}
