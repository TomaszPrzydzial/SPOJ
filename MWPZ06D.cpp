#include <iostream>
 
using namespace std;
 
int tests;
unsigned long long int students, candies;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> students >> candies;
 
        if(candies<(students-1)) cout << "TAK";
        else if((students-1)==0) cout << "TAK";
        else if((candies%(students-1))!=0) cout << "TAK";
        else cout << "NIE";
 
        cout << endl;
    }
 
    return 0;
}
