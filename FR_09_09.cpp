#include <iostream>
#include <string.h>
 
using namespace std;
 
void weird_ceasar(string cipher)
{
    for(int i=0; i<cipher.length(); i+=2)
    {
        int temp = cipher[i]+(cipher[i+1]-65);
        if(temp>90) temp-=26;
 
        cout << char(temp);
    }
 
    cout << endl;
}
 
int main()
{
    string code;
    cin >> code;
 
    weird_ceasar(code);
 
    return 0;
}
