#include <iostream>
 
using namespace std;
 
char code_ROT(char c, int rot)
{
    int max_value;
 
    if(c>=65 && c<= 90) max_value = 90;
    else if(c>=97 && c<= 122) max_value = 122;
    else if(c>=48 && c<=57)
    {
        if(c+5>57) return c+5-10;
        else return c+5;
    }
    else return c;
 
    if(c+rot>max_value) return c+rot-26;
    else return c+rot;
 
}
 
int main()
{
    string text;
 
    while(getline(cin, text))
    {
        for(int i=0; i<text.length(); i++)
        {
            cout << code_ROT(text[i], 13);
        }
 
        cout << endl;
    }
 
    return 0;
}
