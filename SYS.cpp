#include <iostream>
#include <math.h>
 
 
using namespace std;
 
string to_elv(int decimal);
 
int ile;
int a;
 
 
char hex_string[20];
 
 
int main()
{
 
    cin >> ile;
 
    for (int i=0; i<ile; i++)
    {
        cin >> a;
 
        sprintf(hex_string, "%X", a);
        cout << hex_string << " " << to_elv(a) << endl;
 
    }
 
 
    return 0;
 
}
 
 
 
 
string to_elv(int decimal)
{
    string base_11;
    int dzielnik = 11;
    int pozycja = 0;
    bool gotowe = false;
 
 
    //szukamy liczby na pozycji 0, rozpatrzamy dla liczby 235
 
    do
    {
        int wartosc_pozycji = int(pow(dzielnik, pozycja)); //1, 11, 121 itd.
        int sprawdzana_wartosc = int(pow(dzielnik, (pozycja+1))); //dzielimy prz kolejna wartosc: 11, 121 itd.
 
        int modulo_11 = decimal%sprawdzana_wartosc; //Reszta z dzielenia np. 235/11 lub 231/121 itd. -> mamy 4, sprawdzamy dzielac przez wartosc kolejnej pozycji
        modulo_11 = modulo_11/int(pow(dzielnik, pozycja));
 
        if (modulo_11 == 10) base_11 = "A" + base_11;
        else base_11 = to_string(modulo_11) + base_11;     //zapisujemy wartosci
 
 
        //sprawdzamy czy mamy pelna liczbe
        if (decimal == modulo_11 * wartosc_pozycji) gotowe=true;
        else
        {
            decimal -= modulo_11 * wartosc_pozycji;
            pozycja++;
        }
 
 
 
    } while (gotowe == false);
 
    return base_11;
}
