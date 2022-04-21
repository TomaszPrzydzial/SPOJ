#include <iostream>
 
using namespace std;
 
string KEYWORD = "FRAKTAL";
 
bool is_ceasar_code(string word)
{
    if(word.length()!=KEYWORD.length()) return false;
 
    int shift = word[0] - KEYWORD[0];
    if(shift<0) shift+=26;
 
    for(int i=1; i<KEYWORD.length(); i++)
    {
        int diff = word[i] - KEYWORD[i];
        if(diff<0) diff += 26;
 
        if(diff!=shift) return false;
    }
 
    return true;
}
 
int main()
{
    int d;
    cin >> d;
 
    while(d--)
    {
        string line;
        cin >> line;
 
        if(is_ceasar_code(line)) cout << "tak" << endl;
        else cout << "nie" << endl;
    }
 
    return 0;
}
