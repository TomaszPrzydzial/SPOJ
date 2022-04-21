#include <iostream>
#include <string>
#include <stdlib.h>
 
using namespace std;
 
int liczba_testow;
string pesel_number;
 
bool pesel_validation(string pesel)
{
    bool result;
    int pesel_tab[11];
 
    result=false;
 
    for(int i=0; i<11; i++)
    {
        pesel_tab[i]=(pesel[i] - '0');
    }
 
    int valid_temp;
 
    valid_temp =
    pesel_tab[0] * 9 +
    pesel_tab[1] * 7 +
    pesel_tab[2] * 3 +
    pesel_tab[3] * 1 +
    pesel_tab[4] * 9 +
    pesel_tab[5] * 7 +
    pesel_tab[6] * 3 +
    pesel_tab[7] * 1 +
    pesel_tab[8] * 9 +
    pesel_tab[9] * 7;
 
    if(valid_temp%10==pesel_tab[10]) result = true;
    
    return result;
}
 
 
int main()
{
 
    cin >> liczba_testow;
 
    while(liczba_testow--)
    {
        cin >> pesel_number;
 
        if(pesel_validation(pesel_number)==1) cout << 'D';
        else cout << 'N';
 
        cout << "\n";
    }
 
 
 
 
    return 0;
}
