#include <iostream>
#include <math.h>
#include <vector>
 
using namespace std;
 
int main()
{
    float letters_frequency[26];
    float letters_in_text_frequency[26];
    int letters_count[26]={0};
    int letters_decode_table[26];
 
    //get original letters frequency
    for(int i=0; i<26; i++)
    {
        char temp_char;
        cin >> temp_char >> letters_frequency[temp_char-97];
    }
 
    vector <string> code_text;
    string code_text_line;
    int all_letters=0;
 
    //get text lines
    while (getline(cin, code_text_line))
    {
        code_text.push_back(code_text_line);
 
        for(int i=0; i<code_text_line.length(); i++)
        {
            if(code_text_line[i]>=65 && code_text_line[i]<=90) {letters_count[code_text_line[i]-65]++; all_letters++;}
            else if(code_text_line[i]>=97 && code_text_line[i]<=122) {letters_count[code_text_line[i]-97]++; all_letters++;}
        }
    }
 
    //calculate coded text letters frequency
    for(int i=0; i<26; i++)
    {
        letters_in_text_frequency[i]=round((letters_count[i]/(float)all_letters)*100000.0)/100000.0;
        //cout << char(i+97) << " " << letters_in_text_frequency[i] << endl;
 
        for(int k=0; k<26; k++)
        {
            if(letters_frequency[k]==letters_in_text_frequency[i])
            {
                letters_decode_table[i]=k;
                break;
            }
        }
    }
 
    //decode text lines
    for(int i=0; i<code_text.size(); i++)
    {
        for(int k=0; k<code_text[i].length(); k++)
        {
            int char_code=code_text[i][k];
 
            if(char_code>=65 && char_code<=90) cout << char(letters_decode_table[char_code-65]+65);
            else if(char_code>=97 && char_code<=122) cout << char(letters_decode_table[char_code-97]+97);
            else cout << char(code_text[i][k]);
        }
        
        cout << endl;
    }
 
    return 0;
}
