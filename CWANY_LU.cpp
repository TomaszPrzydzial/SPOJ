#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int n, k;
        cin >> n >> k;
 
        if((n|k)>n) cout << "P";
        else cout << "N";
        cout << endl;
 
    }
 
    return 0;
 
}
