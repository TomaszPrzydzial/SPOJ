#include <iostream>
 
using namespace std;
 
char znak;
int liczba;
int tablica[10];
int indeks=-1;
 
void dodaj_na_stos()
{
    int liczba;
    cin >> liczba;
 
    if(indeks < 9)
    {
        indeks++;
        tablica[indeks]=liczba;
        cout << ":)";
    }
    else
    {
        cout << ":(";
    }
 
}
 
void zdejmij_ze_stosu()
{
    if(indeks >= 0)
    {
       cout << tablica[indeks];
       indeks--;
    }
    else
    {
        cout << ":(";
    }
}
 
int main()
{
    while(cin >> znak)
    {
        switch(znak)
        {
             case '+':
             dodaj_na_stos();
             cout << endl;
             break;
 
             case '-':
             zdejmij_ze_stosu();
             cout << endl;
             break;
 
             default:
             cout << ":(" << endl;
             break;
 
        }
 
    }
 
    return 0;
}
