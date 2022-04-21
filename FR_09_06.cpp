#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string word;
        cin >> word;
 
        int low_letter=25, high_letter=0;
 
        for(int i=0; i<word.length(); i++)
        {
            if(word[i]-65>high_letter) high_letter=word[i]-65;
            if(word[i]-65<low_letter) low_letter=word[i]-65;
        }
 
        cout << high_letter-low_letter << endl;
 
    }
 
    return 0;
}
