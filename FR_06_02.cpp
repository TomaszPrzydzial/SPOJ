#include <iostream>
 
using namespace std;
 
int main()
{
    string line, text;
 
    while(getline(cin, line)) text+=line;
 
    int sentences=0;
 
    for(int i=0; i<text.length(); i++)
    {
        if(text[i]=='!' || text[i]=='?') sentences++;
        if(text[i]=='.')
        {
            while(text[i]=='.') i++;
            sentences++;
        }
    }
 
    cout << sentences << endl;
 
    return 0;
}
