#include <iostream>
 
using namespace std;
 
string str_a, str_b;
int tests;
int length;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> str_a >> str_b;
 
    //A zawsze krotsze
 
    if(str_a.length()<str_b.length()) length = str_a.length();
    else length = str_b.length();
 
    for(int i=0; i<length; i++)
    {
        cout << str_a[i] << str_b[i];
    }
 
    cout << endl;
 
    }
 
    return 0;
}
