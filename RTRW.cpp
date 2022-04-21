#include <iostream>
 
using namespace std;
 
string letters_tab[3][26]=
{
    {" __ "," __ ", " __"," __ ", " __"," __"," __ ","    "," "," _","   ", "   ","    ", "    ", " __ "," __ ",""," __ ", " __ ","___","    ","","    ","", "   ", "__"},
    {"|__|","|__\\","|  ","|  \\","|_ ","|_ ","| _ ","|__|","|"," |","|_/", "|  ","|\\/|","|\\ |","|  |","|__|","","|__|", "|__ "," | ","|  |","","|  |","", "\\_/"," /"},
    {"|  |","|__/", "|__","|__/", "|__","|  ","|__|","|  |","|","_|","| \\","|__","|  |", "| \\|","|__|","|   ","","| \\ "," __|"," | ","|__|","","|/\\|",""," | ", "/_"}
};
 
string revert_string(string text)
{
    string reverted_text;
    for(int i=text.length()-1; i>=0; i--)
    {
        if(text[i]=='/') text[i]='\\';
        else if(text[i]=='\\') text[i]='/';
        reverted_text+=text[i];
    }
 
    return reverted_text;
}
 
void print_sticker(string text, int type)
{
    if(type==2) text = revert_string(text);
 
    for(int k=0; k<3; k++)
    {
        for(int i=0; i<text.length(); i++)
        {
            int letter_code=text[i];
            if(letter_code>=97 && letter_code<=122) letter_code-=32;
 
            string to_print=" ";
            if(letter_code!=32) to_print = letters_tab[k][letter_code-65];
 
            if(type==2) to_print = revert_string(to_print);
 
            cout << to_print;
            if(i!=text.length()-1) cout << " ";
        }
        cout << endl;
    }
}
 
int main()
{
    int op;
    while(cin >> op)
    {
        if(op==0) break;
        cin.ignore();
 
        string sticker_text;
        getline(cin, sticker_text);
 
        print_sticker(sticker_text, op);
    }
 
    return 0;
}
