#include <iostream>
 
using namespace std;
 
int find_first(string word, char character)
{
    for(int i=0; i<word.length(); i++)
    {
        if(word[i]==character) return i;
    }
}
 
int find_last(string word, char character)
{
    for(int i=word.length()-1; i>=0; i--)
    {
        if(word[i]==character) return i;
    }
}
 
int main()
{
    string sequence;
    cin >> sequence;
 
    int first_index = find_first(sequence, '0');
    int last_index = find_last(sequence, '1');
 
    string subsequence = "";
 
    for(int i=first_index+1; i<last_index; i++)
    {
        subsequence += sequence[i];
    }
 
    if(subsequence.length()>0) cout << subsequence << endl;
    else cout << "PUSTY" << endl;
 
    return 0;
}
