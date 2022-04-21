#include <iostream>
#include <list>
#include <string.h>
 
using namespace std;
 
char input[1024];
char *pointer;
 
list <char> output;
 
int main()
{
    pointer = &input[0];
 
    while(cin.getline(input, sizeof(input)))
    {
 
    for(int i=0; i<sizeof(input); i++)
    {
        if((int)*(pointer+i)!=0) output.push_front(*(pointer+i));
    }
 
    for(list<char>::iterator i = output.begin(); i!=output.end(); i++)
    {
        cout << *i;
    }
 
    memset(input, 0, sizeof(input));
    output.clear();
    cout << endl;
 
    }
 
 
 
    return 0;
}
