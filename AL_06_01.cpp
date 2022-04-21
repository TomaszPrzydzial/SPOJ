#include <iostream>
 
using namespace std;
 
int tests, a, b, k;
 
int main()
{
 
    cin >> tests;
 
    while(tests--)
    {
        cin >> a >> b;
 
        if(a>=0) cout << a%b << endl;
        else
        {
            k = 1;
            while(abs(a)>k*abs(b))
            {
                k++;
            }
 
            cout << k*abs(b)-abs(a) << endl;
        }
    }
 
    return 0;
 
}
