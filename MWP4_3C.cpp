#include <iostream>
#include <string.h>
 
using namespace std;
 
int letter_distance(char letter_A, char letter_B)
{
    int letter_A_code = ((int)letter_A)-65;
    int letter_B_code = ((int)letter_B)-65;
 
    if (letter_A_code==letter_B_code) return 0;
 
    int forward_distance;
    int backward_distance;
 
    if(letter_A_code>letter_B_code) swap(letter_A_code, letter_B_code);
 
    forward_distance=letter_B_code-letter_A_code;
    backward_distance=(26-letter_B_code)+letter_A_code;
 
    return min(forward_distance, backward_distance);
}
 
int main()
{
    short unsigned int tests;
    int moves;
    string word;
 
 
    cin >> tests;
 
    while(tests--)
    {
        cin >> word;
 
        moves+=letter_distance('A', word[0]);
 
        for(int i=1; i<word.length(); i++)
        {
            moves+=letter_distance(word[i-1], word[i]);
        }
 
        cout << moves << endl;
        moves=0;
    }
 
 
 
    return 0;
}
