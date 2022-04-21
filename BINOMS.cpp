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
 
        double result=1;
 
        if(n==k || k==0) cout << 1 << endl;
        else if (n!=0 && n>k)
        {
            for(int i=1; i<=k; i++)
            {
                result = (result * (n-i+1))/i;
            }
 
            cout << setprecision(30) << result << endl;
        }
        else cout << 0 << endl;
 
   }
 
    return 0;
}
