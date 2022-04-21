#include <iostream>
 
using namespace std;
 
int main()
{
 
    string line;
 
    while(getline(cin, line))
    {
        cout << line[0];
 
        for(int i=1; i<line.length(); i++)
        {
            if(line[i]==32) cout << line[i+1];
            if(line[i]==46) cout << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}
