#include <iostream>
 
using namespace std;
 
int main()
{
    string text;
 
    while(getline(cin, text))
    {
        int shift=2;
        int counter=-1;
        int mark=0;
        int next_mark=1;
 
        for(int i=0; i<text.length(); i++)
        {
            if(text[i]!=32)
            {
                counter++;
                int char_code;
 
                if(mark==counter)
                {
                    char_code = text[i]-shift%26;
                    if(char_code<65) char_code+=26;
 
                    cout << char(char_code);
 
                    shift++;
 
                    int temp=mark;
                    mark = next_mark;
                    next_mark+=temp;
                    counter=0;
                }
                else
                {
                    char_code = text[i]-3;
                    if(char_code<65) char_code+=26;
 
                    cout << char(char_code);
                }
 
 
            }
            else cout << " ";
        }
        cout << endl;
    }
 
    return 0;
}
