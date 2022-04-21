#include <iostream>
 
using namespace std;
 
int main()
{
 
    unsigned int lines = 0;
    string text_line;
 
    while(getline(cin, text_line))
    {
    	lines++;
        if(cin.eof()) break;
    }
 
    cout << lines << endl;
 
    return 0;
}
