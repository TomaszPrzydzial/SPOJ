#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        double a;
        cin >> a;
 
        double perimeter=a/2+(a/sqrt(2));
        double area=perimeter*(perimeter-a)*(perimeter-a/sqrt(2))*(perimeter-a/sqrt(2));
        area = sqrt(area);
        double height=(2*area)/(a/sqrt(2));
 
        cout << fixed << setprecision(2) << ((a*a)/2)/3 * height << endl;
    }
 
    return 0;
}
