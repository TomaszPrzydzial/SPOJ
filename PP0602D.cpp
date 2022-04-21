#include <iostream>
#include <string>
#include <stdlib.h>
 
using namespace std;
 
int n, k;
 
int main()
{
    cin >> n >> k;
 
    int *tab;
    tab = new int[n];
 
    int *tab2;
    tab2 = new int[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> tab[i];
 
        int new_place;
        new_place=i;
 
        for(int j=0; j<k; j++)
        {
            new_place--;
            if(new_place<0) new_place = n-1;
        }
 
        tab2[new_place]=tab[i];
    }
 
    for(int i=0; i<n; i++)
    {
        cout << tab2[i] << " ";
    }
 
    delete [] tab;
    delete [] tab2;
 
    cout << endl;
 
    return 0;
}
