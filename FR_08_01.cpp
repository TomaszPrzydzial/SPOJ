#include <iostream>
 
using namespace std;
 
int main()
{
    string number;
    cin >> number;
 
    bool is_even=false;
 
    for(int i=number.length()-1; i>=0; i--)
    {
        if((number[i]-'0')%2==0) {is_even=true; break;}
    }
 
    if(is_even) cout << "Tak";
    else cout << "Nie";
    cout << endl;
 
    return 0;
}
