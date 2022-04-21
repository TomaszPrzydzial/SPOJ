#include <iostream>
#include <string.h>
 
using namespace std;
 
string morse_table[26]={".-", "-...", "-.-.", "-..", ".", ".-..", "--.", "....", "..", ".---", "-.-", "..-.", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
 
int main()
{
    string input;
 
    while(getline(cin, input))
    {
        if(input=="") break;
 
        for(int i=0; i<input.length(); i++)
        {
            int letter_code=input[i];
            if(letter_code>=97) letter_code-=32;
 
            if(letter_code>=65 && letter_code<=90) cout << morse_table[letter_code-65] << "/";
            if(letter_code==32) cout << "/";
        }
 
        cout << endl;
    }
 
    return 0;
}
