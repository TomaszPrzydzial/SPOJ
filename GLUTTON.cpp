#include <iostream>
#include <math.h>
 
 
using namespace std;
 
int liczba_zestawow;
 
int liczba_obzartuchow;
float liczba_ciastek_w_pudelku;
int czas_jedzenia;
 
int doba = 86400;
 
int main()
{
    cin >> liczba_zestawow;
 
    for (int i=0; i<liczba_zestawow; i++)
    {
            int trzeba_ciastek=0;
 
            cin >> liczba_obzartuchow >> liczba_ciastek_w_pudelku;
 
            for (int i=0; i<liczba_obzartuchow; i++)
            {
 
                int obzartuch_zjada_ciastek=0;
 
                cin >> czas_jedzenia;
 
                obzartuch_zjada_ciastek = doba/czas_jedzenia;
 
                trzeba_ciastek += obzartuch_zjada_ciastek;
            }
 
            float trzeba_pudelek = trzeba_ciastek/liczba_ciastek_w_pudelku;
 
            cout << ceil(trzeba_pudelek) << endl;
 
    }
 
    return 0;
}
