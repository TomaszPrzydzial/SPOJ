#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    short int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        string text_number;
 
        cin >> text_number;
 
        for(int i=0; i<text_number.length(); i++)
        {
            if(text_number[i]>=65 && text_number[i]<=67) cout << 2;
            if(text_number[i]>=68 && text_number[i]<=70) cout << 3;
            if(text_number[i]>=71 && text_number[i]<=73) cout << 4;
            if(text_number[i]>=74 && text_number[i]<=76) cout << 5;
            if(text_number[i]>=77 && text_number[i]<=79) cout << 6;
            if(text_number[i]>=80 && text_number[i]<=83) cout << 7;
            if(text_number[i]>=84 && text_number[i]<=86) cout << 8;
            if(text_number[i]>=87 && text_number[i]<=90) cout << 9;
        }
 
        cout << endl;
    }
 
    return 0;
}
