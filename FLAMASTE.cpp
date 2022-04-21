#include <iostream>
#include<string>
 
using namespace std;
 
int ile;
string slowo;
 
int main()
{
    cin >> ile;
 
    for(int j=0; j<ile; j++)
    {
         cin >> slowo;
 
    int powtorzen=1;
 
    for (int i=1; i<=slowo.length(); i++)
    {
        char litera = slowo[i];
        char litera_poprzednia = slowo[i-1];
 
 
        if(litera==litera_poprzednia)
        {
            powtorzen++;
        }
        else
        {
 
            if(powtorzen>2) cout << litera_poprzednia << powtorzen;
            else if(powtorzen == 2) cout << litera_poprzednia << litera_poprzednia;
            else cout << litera_poprzednia;
 
            powtorzen=1;
 
 
        }
 
 
    }
        cout <<"\n";
    }
    return 0;
}
