#include <iostream>
#include <string.h>
 
using namespace std;
 
char input[102];
char letter;
 
int main()
{
    while(cin.get(letter))
    {
        if(letter=='\n') return 0;
 
        cin.getline(input, sizeof(input));
 
        for(int i=0; i<sizeof(input); i++)
        {
            int code=(int)(input[i]);
 
            if(code!=0 && code!=32 && input[i]!=letter) cout << input[i];
        }
 
        memset(input, 0, sizeof(input));
        cout << "\n";
    }
 
    return 0;
}
