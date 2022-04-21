#include <iostream>
#include <algorithm>
#include <string.h>
 
using namespace std;
 
int tests;
int numbers[6];
 
int convert_code(int number)
{
    int code=0;
    string num_string=to_string(number);
 
    for(int i=0; i<num_string.length(); i++)
    {
        if(num_string[i]=='0' || num_string[i]=='6' || num_string[i]=='9') code+=1;
        if(num_string[i]=='8') code+=2;
    }
 
    return code;
}
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        for(int i=0; i<6; i++)
        {
            cin >> numbers[i];
        }
 
        sort(numbers, numbers+6);
 
        cout << convert_code(numbers[0])<< " " << convert_code(numbers[5]) << endl;
    }
 
    return 0;
}
