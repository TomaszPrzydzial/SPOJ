#include <iostream>
#include <vector>
 
using namespace std;
 
bool is_strong(string password)
{
    if(password.length()<8) return false;
 
    bool capital_letter=false;
    bool small_letter=false;
    bool digit=false;
    bool special_char=false;
 
    for(int i=0; i<password.length(); i++)
    {
        if(password[i]>=65 && password[i]<=90) capital_letter=true;
        else if(password[i]>=97 && password[i]<=122) small_letter=true;
        else if(password[i]>=48 && password[i]<=57) digit=true;
        else if(password[i]>=0 && password[i]<=127) special_char=true;
    }
 
    if(capital_letter && small_letter && digit && special_char) return true;
    else return false;
}
 
int main()
{
    unsigned int pass_quantity;
    cin >> pass_quantity;
    cin.ignore();
 
    vector <string> strong_passwords;
 
    while(pass_quantity--)
    {
        string pass;
        getline(cin, pass);
 
        if(is_strong(pass)) strong_passwords.push_back(pass);
    }
 
    for(int i=0; i<strong_passwords.size(); i++)
    {
        cout << strong_passwords[i] << endl;
    }
 
    return 0;
}
