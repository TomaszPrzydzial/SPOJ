#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string line;
        cin >> line;
 
        for(int i=0; i<line.length(); i+=5)
        {
            int temp=0;
            if(line[i]=='1') temp+=16;
            if(line[i+1]=='1') temp+=8;
            if(line[i+2]=='1') temp+=4;
            if(line[i+3]=='1') temp+=2;
            if(line[i+4]=='1') temp+=1;
            cout << (char)(temp+65);
        }
 
        cout << endl;
    }
 
    return 0;
}
