#include <iostream>
#include <string>
 
using namespace std;
 
int ile_testow;
int liczba_n;
int liczba_n_rev;
int suma;
int prob;
 
bool czy_palindrom(string liczba)
{
    int dlugosc_liczby = liczba.length();
    bool b_palindrom = true;
    string liczba_rev;
 
    int *tab = new int[dlugosc_liczby];
    int *tab_rev = new int[dlugosc_liczby];
 
    for(int i=0; i<dlugosc_liczby; i++)
    {
        tab[i]=liczba[i]-48;
        tab_rev[dlugosc_liczby-1-i]=liczba[i]-48;
 
        liczba_rev = to_string(liczba[i]-48) + liczba_rev;
    }
 
    for(int i=0; i<dlugosc_liczby; i++)
    {
        if(tab[i]!=tab_rev[i])
        {
            b_palindrom = false;
            liczba_n_rev = stoi(liczba_rev);
            suma = stoi(liczba) + liczba_n_rev;
        }
    }
 
    delete [] tab;
    delete [] tab_rev;
    return b_palindrom;
}
 
int main()
{
    cin >> ile_testow;
 
    while(ile_testow--)
    {
        cin >> liczba_n;
 
        prob=0;
        suma = liczba_n;
 
        while(czy_palindrom(to_string(suma))==0) prob++;
 
        cout << suma << " " << prob << endl;
 
    }
 
    return 0;
}
