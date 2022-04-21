#include <iostream>
 
using namespace std;
 
 
int srednia_predkosc(int v1, int v2)
{
    return (2*(v1*v2))/(v1+v2);
}
 
int main()
{
    int liczba_testow;
 
    cin >> liczba_testow;
 
    int **pomiary = new int*[liczba_testow];
    for (int i=0; i < liczba_testow; i++)
    {
        pomiary[i] = new int[2];
        cin >> pomiary[i][1] >> pomiary[i][2];
    }
 
    for (int i=0; i < liczba_testow; i++)
    {
        cout << srednia_predkosc(pomiary[i][1], pomiary[i][2]) << endl;
    }
 
 
 
 
    delete [] pomiary;
 
    return 0;
}
