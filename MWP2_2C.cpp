#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
long long tests;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        int x1, y1, x2, y2;
        long double r1, r2;
 
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
 
        long double d;
 
        d=sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
 
        if(d>=r1+r2) cout << setprecision(2) << fixed << (double)0;
        else if (d+min(r1, r2)<max(r1, r2)) cout << setprecision(2) << fixed << 2*min(r1, r2);
        else cout << setprecision(2) << fixed << r1+r2-d;
 
        cout << "\n";
 
    }
 
    return 0;
}
