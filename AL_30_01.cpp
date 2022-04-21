#include <iostream>
#include <vector>
 
using namespace std;
 
bool is_anagram(string original, string test_word)
{
    if(original.length()!=test_word.length()) return false;
 
    vector <char> original_word;
 
    for(int i=0; i<original.length(); i++) original_word.push_back(original[i]);
 
    for(int i=0; i<test_word.length(); i++)
    {
        for(int k=0; k<original_word.size(); k++)
        {
            if(test_word[i]==original_word[k]) {original_word.erase(original_word.begin()+k); break;}
        }
    }
 
    if(original_word.size()==0) return true;
    else return false;
}
 
int main()
{
    string word;
    int tests, anagrams=0;
    cin >> word >> tests;
 
    while(tests--)
    {
        string test_word;
        cin >> test_word;
 
        if(is_anagram(word, test_word)) anagrams++;
    }
 
    cout << anagrams << endl;
 
    return 0;
}
