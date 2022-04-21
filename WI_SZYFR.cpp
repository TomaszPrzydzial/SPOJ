#include <iostream>
 
using namespace std;
 
namespace choices
{
    enum Option
    {
        Encrypt,
        Decrypt
    };
}
 
choices::Option resolveOption(std::string input)
{
    if(input == "SZYFRUJ") return choices::Option::Encrypt;
    if(input == "DESZYFRUJ") return choices::Option::Decrypt;
}
 
char encrypt(char letter, int rot)
{
    int code = int(letter)+rot;
    if(code>90) code-=26;
    return code;
}
 
char decrypt(char letter, int rot)
{
    int code = int(letter)-rot;
    if(code<65) code+=26;
    return code;
}
 
void crypt_line(string line, string code_key, bool do_decrypt)
{
    int key_index=-1;
 
    for(int i=0; i<line.length(); i++)
    {
        key_index++;
        if(key_index>code_key.length()-1) key_index=0;
 
        int rot = code_key[key_index]-48;
 
        if(do_decrypt) cout << decrypt(line[i], rot);
        else cout << encrypt(line[i], rot);
    }
 
    cout << endl;
 
    return;
}
 
 
 
int main()
{
    string op, key, text;
    cin >> op >> key >> text;
 
    switch(resolveOption(op))
    {
        case choices::Option::Encrypt:
        crypt_line(text, key, 0);
        break;
 
        case choices::Option::Decrypt:
        crypt_line(text, key, 1);
        break;
    }
 
    return 0;
}
