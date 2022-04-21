#include <iostream>
#include <math.h>
 
using namespace std;
 
int bin_to_dec(string bin)
{
    int dec=0;
    int exp=0;
 
    for(int i=bin.length()-1; i>=0; i--)
    {
        if(bin[i]==49) dec+=pow(2, exp);
        exp++;
    }
 
    return dec;
}
 
int main()
{
    for(int i=0; i<4; i++)
    {
        string bin_num;
        cin >> bin_num;
 
        if(i==2) cout << ":";
        cout << bin_to_dec(bin_num);
    }
 
    cout << endl;
 
    return 0;
}
