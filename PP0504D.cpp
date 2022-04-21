#include <iostream>
#include <math.h>
#include <cstring>
 
using namespace std;
 
int tests;
float number;
string binary_number;
 
int main()
{
 
    cin >> tests;
 
    while(tests--)
    {
         cin >> number;
 
    int *bit = reinterpret_cast<int*>(&number);
 
    for(int i=31; i>=0; i--)
    {
        binary_number += to_string((*bit >> i)&1);
 
        if(i%8==0)
        {
            char temp_hex[20];
            sprintf(temp_hex, "%x", stoi(binary_number, 0, 2));
 
            cout << temp_hex;
 
            if(i!=0) cout << " ";
 
            binary_number="";
        }
 
 
    }
 
    cout << endl;
 
    }
 
    return 0;
}
