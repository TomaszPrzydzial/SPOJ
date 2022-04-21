#include <iostream>
 
using namespace std;
 
char alphabet_arr[26][26];
 
void initialize_alphabet_arr()
{
    for(int i=0; i<26; i++)
    {
        for(int k=0; k<26; k++)
        {
            int char_code=65+i+k;
            if(char_code>90) char_code-=26;
            alphabet_arr[i][k]=char_code;
        }
    }
    return;
}
 
string get_code_string(string code, string key)
{
    string code_string;
    int key_index=0;
 
    for(int i=0; i<code.length(); i++)
    {
        if(code[i]!=32)
        {
            code_string+=key[key_index];
            key_index++;
            if(key_index>key.length()-1) key_index=0;
        }
        else code_string+=" ";
    }
 
    return code_string;
}
 
void encrypt_password(string pass, string key)
{
    string key_string=get_code_string(pass, key);
 
    for(int i=0; i<pass.length(); i++)
    {
        if(pass[i]==32) cout << " ";
        else
        {
            cout << alphabet_arr[pass[i]-65][key_string[i]-65];
        }
    }
    cout << endl;
    return;
}
 
int main()
{
    initialize_alphabet_arr();
 
    int tests;
    cin >> tests;
    cin.ignore();
 
    while(tests--)
    {
        string key, password;
        getline(cin, key);
        getline(cin, password);
 
        encrypt_password(password, key);
    }
 
    return 0;
}
