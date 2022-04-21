#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int kids_A, kids_B;
        cin >> kids_A >> kids_B;
 
        int multiplier=1;
 
        while((kids_A*multiplier)%kids_B) multiplier++;
 
        cout << multiplier*kids_A << endl;
    }
 
 
    return 0;
}
