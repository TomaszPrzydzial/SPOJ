#include <iostream>
#include <string.h>
#include <vector>
 
using namespace std;
 
int main()
{
    string line;
    vector <string> vLines;
 
    while(getline(cin, line))
    {
        vLines.clear();
        string temp_line="";
 
        for(int i=0; i<=line.length(); i++)
        {
            if(line[i]==' ' || i==line.length()) {vLines.push_back(temp_line); temp_line="";}
            else temp_line+=line[i];
        }
 
        for(int i=1; i<vLines.size(); i++)
        {
            cout << vLines[0][i-1] << vLines[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}
