#include <iostream>
 
using namespace std;
 
int length;
 
int main()
{
 
    cin >> length;
 
    for (int i=0; i<length; i++)
    {
        string temp_word;
        cin >> temp_word;
 
        int word_size = temp_word.length();
 
        cout << temp_word.substr(0, word_size/2) << endl;
    }
 
 
    return 0;
}
