#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        double r1, r2;
        cin >> r1 >> r2;
 
        double c = sqrt((2*r1*2*r1)+(2*r2*2*r2));
        double alpha = 2*acos(r1*2/c);
        double beta = M_PI - 2*acos(r1*2/c);
 
        double area_1 = M_PI*(r1*r1);
        double area_2 = M_PI*(r2*r2);
 
        area_1/=2;
        area_2/=2;
 
        double seg_1 = (((c/2)*(c/2))/2)*(beta-sin(beta));
        double seg_2 = (((c/2)*(c/2))/2)*(alpha-sin(alpha));
 
        area_1-=seg_1;
        area_2-=seg_2;
 
        cout << fixed << setprecision(2) << area_1+area_2 << endl;
    }
 
    return 0;
}
