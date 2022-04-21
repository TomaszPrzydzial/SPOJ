#include <iostream>
#include <iomanip>
 
using namespace std;
 
int tests;
float first_cut, second_cut;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> first_cut >> second_cut;
 
        first_cut = (100-first_cut)/100;
        second_cut = (100-second_cut)/100;
 
        cout << setprecision(2) << fixed << (1-first_cut*second_cut)*100 << endl;
 
    }
 
}
