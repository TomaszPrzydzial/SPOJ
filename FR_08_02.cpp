#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int tab[6];
 
        for(int i=0; i<6; i++) cin >> tab[i];
 
        int sum=2*(tab[0]+tab[1]);
        int wins=tab[0]+tab[2]+tab[4];
        int loses=tab[1]+tab[3]+tab[5];
 
        cout << sum-wins << " " << sum-loses << endl;
    }
 
    return 0;
}
