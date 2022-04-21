#include <iostream>
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
            if(line[i]==32 || i==line.length()) {vLines.push_back(temp_line); temp_line="";}
            else temp_line+=line[i];
        }
 
        int v_size = vLines.size();
 
        cout << vLines[v_size-1][0];
        for(int i=vLines[0].length()-1; i>=1; i--) cout << vLines[0][i];
        cout << " ";
 
        for(int i=0; i<v_size-1; i++)
        {
            cout << vLines[i][0];
            for(int j=vLines[i+1].length()-1; j>=1; j--) cout << vLines[i+1][j];
            cout << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}
