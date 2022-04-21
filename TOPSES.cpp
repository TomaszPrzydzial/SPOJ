#include <iostream>
#include <string.h>
 
using namespace std;
 
string shift_string(string line)
{
    char first_char=line[0];
    return line.substr(1, line.length()-1)+first_char;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string line_A, line_B;
        cin >> line_A >> line_B;
 
        bool solvable=false;
        string shift_line=line_B;
        for(int i=0; i<line_A.length(); i++)
        {
            shift_line=shift_string(shift_line);
            if(line_A==shift_line) {solvable=true; break;}
        }
 
        if(solvable) cout << "yes";
        else cout << "no";
        cout << endl;
    }
 
    return 0;
}
