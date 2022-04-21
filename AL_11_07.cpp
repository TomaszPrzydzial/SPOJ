#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    string line;
 
    while(getline(cin, line))
    {
        if(line[0]=='\0') break;
 
        for(int i=1; i<line.length(); i+=2) cout << line[i] << line[i-1];
 
        if(line.length()%2!=0) cout << line[line.length()-1];
 
        cout << endl;
    }
 
    return 0;
}
