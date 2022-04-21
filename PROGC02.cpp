#include <iostream>
#include <string.h>
 
using namespace std;
 
unsigned long long int ascii_table[256];
 
int main()
{
    string input;
    wchar_t c;
    int line_counter=0;
 
    while((c=getchar())!=EOF)
    {
      input+=c;
    }
 
    for(int i=0; i<input.length(); i++)
    {
        int ascii_code = (int)input[i];
        if(ascii_code>=0) ascii_table[ascii_code]++;
        else ascii_table[256+ascii_code]++;
 
    }
 
    for(int i=0; i<256; i++)
    {
        if(ascii_table[i]!=0) cout << i << " " << ascii_table[i] << endl;
    }
 
    return 0;
}
