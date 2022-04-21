#include <iostream>
#include <string.h>
 
using namespace std;
 
int reverse_number(string number)
{
    int result=0;
    int multiplier=1;
 
    for(int i=0; i<number.length(); i++)
    {
        result+=int(number[i]-48)*multiplier;
        multiplier*=10;
    }
 
    return result;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string num1, num2;
        cin >> num1 >> num2;
 
        if(reverse_number(num1)>reverse_number(num2)) cout << reverse_number(num1);
        else cout << reverse_number(num2);
        cout << endl;
    }
 
    return 0;
}
