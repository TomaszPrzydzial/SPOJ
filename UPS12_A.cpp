#include <iostream>
 
using namespace std;
 
int letter_count[26];
 
int main()
{
    fill(letter_count, letter_count+26, 0);
 
    string input;
    cin >> input;
 
    for(int i=0; i<input.length(); i++) letter_count[input[i]-97]++;
 
    bool letter_zero_checks=true;
    bool letter_count_checks=true;
 
    for(int i=0; i<26; i++)
    {
        if(letter_count[i]==0) {letter_zero_checks=false; letter_count_checks=false; break;}
        if(letter_count[i]!=letter_count[0]) letter_count_checks=false;
 
        if(letter_zero_checks==false && letter_count_checks==false) break;
    }
 
    if(letter_count_checks) cout << "PANGRAM PERFEKCYJNY";
    else if(letter_zero_checks) cout << "PANGRAM";
    else cout << "NIE";
    cout << endl;
 
    return 0;
}
