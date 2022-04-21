#include <iostream>
 
using namespace std;
 
int main()
{
    int letters;
    cin >> letters;
 
    char* letters_tab = new char[letters];
    char temp_letter;
 
    for(int i=0; i<letters; i++) {cin >> temp_letter; letters_tab[i]=temp_letter;}
 
    string word;
    cin >> word;
 
    for(int i=0; i<word.length(); i++)
    {
        for(int k=0; k<letters; k++)
        {
            if(word[i]==letters_tab[k]) {cout << word[i]; break;}
        }
        cout << word[i];
    }
    cout << endl;
 
    return 0;
}
