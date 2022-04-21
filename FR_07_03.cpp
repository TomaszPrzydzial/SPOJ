#include <iostream>
#include <vector>
 
using namespace std;
 
vector <pair <string, string>> users;
 
bool is_login_valid(string login)
{
    if(login.length()<3 || login.length()>12) return false;
 
    for(int i=0; i<login.length(); i++)
    {
        if(login[i]<48 || (login[i]>=58 && login[i]<=64) || (login[i]>=91 && login[i]<=96) || login[i]>122) return false;
    }
 
    return true;
}
 
bool is_password_valid(string password)
{
    if(password.length()<5 || password.length()>15) return false;
 
    bool digit=false;
    bool capital_letter=false;
    bool small_letter=false;
    bool special_char=false;
 
    for(int i=0; i<password.length(); i++)
    {
        if(password[i]>=48 && password[i]<=57) digit=true;
        else if(password[i]>=65 && password[i]<=90) capital_letter=true;
        else if(password[i]>=97 && password[i]<=122) small_letter=true;
        else if(password[i]>=0 && password[i]<=256) special_char=true;
    }
 
    if(capital_letter && small_letter && special_char && digit) return true;
    else return false;
}
 
bool is_login_free(string login)
{
    for(int i=0; i<users.size(); i++) if(users[i].first==login) return false;
 
    return true;
}
 
int check_login_credentials(string login, string password)
{
    for(int i=0; i<users.size(); i++)
    {
        if(users[i].first==login)
        {
            if(users[i].second==password) return 2;
            else return 1;
        }
    }
 
    return 0;
}
 
string convert_to_small_letters(string str)
{
    string new_str;
 
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>=65 && str[i]<=90) new_str+=(str[i]+32);
        else new_str+=str[i];
    }
 
    return new_str;
}
 
int main()
{
    string op;
    int op_quantity;
 
    bool operation; //0 - register, 1 - login
 
    while(cin >> op >> op_quantity)
    {
        if(op=="register") operation=0;
        else operation=1;
 
        while(op_quantity--)
        {
            string user_login, user_password;
            cin >> user_login >> user_password;
 
            user_login=convert_to_small_letters(user_login);
 
            if(operation)
            {
                int login_code=check_login_credentials(user_login, user_password);
 
                if(login_code==0) cout << "Konto nie istnieje";
                else if(login_code==1) cout << "Zle haslo";
                else cout << "Zalogowano";
                cout << endl;
            }
            else
            {
                if(!is_login_free(user_login)) cout << "Login zajety";
                else if(!is_login_valid(user_login) || !is_password_valid(user_password)) cout << "Blad";
                else {users.push_back(make_pair(user_login, user_password)); cout << "Zarejestrowano";}
                cout << endl;
            }
        }
    }
 
    return 0;
}
