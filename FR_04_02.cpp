#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int quantity, lp;
        cin >> quantity >> lp;
 
        lp+=quantity/2;
        if(lp>quantity) lp-=quantity;
 
        if(quantity%2==0) cout << lp << endl;
        else cout << "BRAK" << endl;
    }
 
    return 0;
}
