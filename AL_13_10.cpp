#include <iostream>
 
using namespace std;
 
int main()
{
    std::ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string line, subline;
        cin >> line >> subline;
 
        char *char_pointer=&line[0];
        char *sub_char_pointer=&subline[0];
 
        int sub_length=subline.length();
 
        int  pointer=0;
        for(int i=0; i<line.length(); i++)
        {
            if(*(char_pointer+i)==*(sub_char_pointer+pointer)) pointer++;
            if(pointer==sub_length) break;
        }
 
        if(pointer==sub_length) printf("Tak\n");
        else printf("Nie\n");
    }
 
    return 0;
}
