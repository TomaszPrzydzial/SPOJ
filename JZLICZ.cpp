#include <iostream>
#include <list>
#include <string.h>
 
using namespace std;
 
int tests;
char input[200];
char *pointer;
 
int alphabet_small[26];
int alphabet_large[26];
 
int main()
{
    pointer = &input[0];
 
    cin >> tests;
    tests++;
 
    while(tests--)
    {
        memset(input, 0, sizeof(input));
        cin.getline(input, sizeof(input));
 
        for(int i=0; i<sizeof(input); i++)
        {
            int code=(int)*(pointer+i);
 
            if(code>=97 && code<=122) alphabet_small[code-97]++;
            else if(code>=65 && code<=90) alphabet_large[code-65]++;
        }
 
    }
 
    for(int i=0; i<26; i++)
    {
        if(alphabet_small[i]!=0) cout << (char)(i+97) << " " << alphabet_small[i] << endl;
    }
    for(int i=0; i<26; i++)
    {
        if(alphabet_large[i]!=0) cout << (char)(i+65) << " " << alphabet_large[i] << endl;
    }
 
    return 0;
}
