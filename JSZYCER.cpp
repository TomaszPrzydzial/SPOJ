#include <iostream>
#include <list>
#include <string.h>
 
using namespace std;
 
char input[200];
char *pointer;
 
list <char> output;
 
int main()
{
    pointer = &input[0];
 
    while(cin.getline(input, sizeof(input)))
    {
 
    for(int i=sizeof(input)-1; i>=0; i--)
    {
        if((int)*(pointer+i)!=0)
        {
           output.push_front(*(pointer+i));
        }
    }
 
    for(list<char>::iterator i = output.begin(); i!=output.end(); i++)
    {
        int ceasar_code;
        ceasar_code = (int)*i;
 
        if(ceasar_code==32);
        else if(ceasar_code+3<=90) ceasar_code+=3;
        else ceasar_code-=23;
 
        cout << char(ceasar_code);
    }
 
    memset(input, 0, sizeof(input));
    output.clear();
    cout << endl;
 
    }
 
 
 
    return 0;
}
