#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
double degrees_to_radians(double angle)
{
    return (angle*M_PI)/180;
}
 
double triangle_area(double side, double angle)
{
    return side*(side/2)*(sin(degrees_to_radians(angle)));
}
 
int main()
{
    double r, alfa, beta, gamma, delta;
    cin >> r >> alfa >> beta >> gamma;
 
    cout << fixed << setprecision(4) << triangle_area(r, alfa)+triangle_area(r, beta)+triangle_area(r, gamma)+triangle_area(r, 360-alfa-beta-gamma) << endl;
 
    return 0;
}
