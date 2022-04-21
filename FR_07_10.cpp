#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    string line;
    while(getline(cin, line))
    {
        int pointer=0;
        int shift=sqrt(line.length()+1);
 
        for(int i=0; i<line.length(); i++)
        {
            cout << line[pointer];
            pointer+=shift;
            if(pointer>=line.length()) pointer-=line.length()-1;
        }
        cout << endl;
    }
 
    return 0;
}
