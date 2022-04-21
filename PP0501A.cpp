#include <iostream>
 
using namespace std;
 
 
int ile_zestawow;
int num_a, num_b;
 
int wyznacz_NWD(int a, int b)
{
    int reszta;
 
    do
    {
        reszta=a%b;
 
        if(reszta!=0)
        {
            a=b;
            b=reszta;
        }
 
    } while (reszta!=0);
 
    return b;
}
 
 
int main()
{
    cin >> ile_zestawow;
 
    for(int i=0; i<ile_zestawow; i++)
    {
        cin >> num_a >> num_b;
 
        cout << wyznacz_NWD(num_a, num_b) << endl;
 
    }
 
    return 0;
}
