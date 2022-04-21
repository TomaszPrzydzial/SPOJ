#include <iostream>
 
using namespace std;
 
 
int liczba;
int ile;
bool is_prime;
 
int main()
{
 
    cin >> ile;
 
    for(int i=0; i<ile; i++)
    {
        cin >> liczba;
 
        is_prime = true;
 
        if(liczba!=0 && liczba!=1)
        {
           for(int j=2; j<liczba; j++)
            {
                if(liczba%j==0)
                {
                    is_prime=false;
                    break;
                }
            }
        } else is_prime = false;
 
    if(is_prime==true) cout << "TAK" << endl;
    else cout << "NIE" << endl;
 
 
    }
 
    return 0;
}
