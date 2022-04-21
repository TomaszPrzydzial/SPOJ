#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        int n, result;
 
        cin >> n;
 
        if(n==0) result=1;
        else if(n==1) result=8;
        else if(n==2) result=33;
        else
        {
            //cross section
            result = n * 4 + ((n-1)%2);
 
            //quartes
            int quarter;
 
            quarter = n * n * 2;
 
            //diffrence
            int diffrence;
 
            diffrence = (n/2)*((n+1)/2);
 
            //calculate
            quarter-=diffrence;
 
            result+=4*quarter;
 
        }
 
        cout << result << endl;
    }
 
    return 0;
}
