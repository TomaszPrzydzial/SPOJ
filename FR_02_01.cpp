#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
double Xa,Ya,Xb,Yb,Xc,Yc;
 
int main()
{
    cin >> Xa >> Ya >> Xb >> Yb >> Xc >> Yc;
 
    double AB, BC, AC, p, R, r;
 
    AB=sqrt(pow(Xa-Xb, 2)+pow(Ya-Yb, 2));
    BC=sqrt(pow(Xb-Xc, 2)+pow(Yb-Yc, 2));
    AC=sqrt(pow(Xa-Xc, 2)+pow(Ya-Yc, 2));
 
    p=(AB+BC+AC)/2;
 
    r=sqrt(((p-AB)*(p-BC)*(p-AC))/p);
    R=(AB*BC*AC)/(4*r*p);
 
    cout << fixed << setprecision(2) << R << endl;
 
    return 0;
}
