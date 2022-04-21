#include <iostream>
#include <tuple>
#include <string.h>
 
using namespace std;
 
bool valid_characters[128];
 
void generate_valid_characters()
{
    fill(valid_characters, valid_characters+128, 0);
 
    valid_characters[46]=true; //dot
    valid_characters[95]=true; //hard space
 
    for(int i=48; i<=57; i++) valid_characters[i]=true; //digits
    for(int i=65; i<=90; i++) valid_characters[i]=true; //capital letters
    for(int i=97; i<=122; i++) valid_characters[i]=true; //small letters
 
    return;
}
 
int count_ats(string str)
{
    int ats=0;
    for(int i=0; i<str.length(); i++)
    {
         if(str[i]=='@') ats++;
         if(ats>1) break;
    }
 
    return ats;
}
 
bool valid_string(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(!valid_characters[str[i]]) return false;
 
        if(str[i]=='.')
        {
            if(i==0 || i==str.length()-1) return false;
            else if(str[i-1]=='.' || str[i+1]=='.') return false;
        }
    }
 
    return true;
}
 
bool is_mail_valid(string login, string domain, string suffix)
{
    if(!valid_string(login) || !valid_string(domain) || !valid_string(suffix)) return false;
    if(login.length()<1 || login.length()>20) return false;
    if(domain.length()<1 || domain.length()>20) return false;
    if(suffix.length()<2 || suffix.length()>3) return false;
 
    for(int i=0; i<suffix.length(); i++) if(suffix[i]=='_' || suffix[i]=='.' || (suffix[i]>=48 && suffix[i]<=57)) return false;
 
    return true;
}
 
tuple <string, string, string> get_mail_address(string str)
{
    string login, domain, suffix;
 
    int domain_start_pos=0;
 
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='@') {domain_start_pos=i+1; break;}
        else login+=str[i];
    }
 
    int last_dot_pos=0;
 
    for(int i=str.length()-1; i>=0; i--)
    {
        if(str[i]=='.') {last_dot_pos=i; break;}
    }
 
    suffix=str.substr(last_dot_pos+1, str.length()-1);
    domain=str.substr(domain_start_pos, last_dot_pos-domain_start_pos);
 
    return make_tuple(login, domain, suffix);
}
 
int main()
{
    generate_valid_characters();
 
    int tests;
    cin >> tests;
    cin.ignore();
 
    while(tests--)
    {
        string mail;
        getline(cin, mail);
 
        tuple <string, string, string>  mail_address = get_mail_address(mail);
 
        if(is_mail_valid(get<0>(mail_address), get<1>(mail_address), get<2>(mail_address)) && count_ats(mail)==1) cout << "Tak";
        else cout << "Nie";
        cout << endl;
    }
 
    return 0;
}
