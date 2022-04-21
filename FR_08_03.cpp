#include <iostream>
 
using namespace std;
 
bool check_pass(string pass, string attempt)
{
    if(pass.length()!=attempt.length()) return false;
 
    for(int i=0; i<pass.length(); i++)
    {
        if(attempt[i]!=42 && attempt[i]!=pass[i]) return false;
    }
 
    return true;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string pass, attempt;
        cin >> pass >> attempt;
 
        if(check_pass(pass, attempt)) cout << "ok";
        else cout << "error";
        cout << endl;
    }
 
    return 0;
}
