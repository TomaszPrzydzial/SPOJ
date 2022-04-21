#include <iostream>
#include <string.h>
 
using namespace std;
 
enum counter
{
    SPACE, NUMBER, WORD
};
 
int main()
{
    string input;
    char c;
 
    while(getline(cin, input))
    {
        int numbers=0;
        int words=0;
        counter count_mode=SPACE;
 
        for(int i=0; i<input.length(); i++)
        {
            if((int)input[i]>=48 && (int)input[i]<=57)
            {
                if(count_mode!=1)
                {
                    numbers++;
                    count_mode=NUMBER;
                }
            }
            else if(((int)input[i]>=65 && (int)input[i]<=90) || ((int)input[i]>=97 && (int)input[i]<=122))
            {
                if(count_mode!=2)
                {
                    words++;
                    count_mode=WORD;
                }
            }
            else if((int)input[i]==32) count_mode=SPACE;
        }
 
        cout << numbers << " " << words << endl;
    }
 
    return 0;
}
