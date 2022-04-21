#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int tests;
double a, b;
 
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> a >> b;
 
        double h, area;
        h=2*(sqrt(a*b))/2;
        area=(a+b)*h/2;
 
        if(area<0) area=0;
 
        cout << fixed << setprecision(2) << area << endl;
    }
 
    return 0;
}
