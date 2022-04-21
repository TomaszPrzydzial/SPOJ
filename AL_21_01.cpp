#include <iostream>
#include <math.h>
 
using namespace std;
 
double get_isosceles_triangle_h(double a, double c)
{
    return sqrt(c*c-a*a);
}
 
double get_isosceles_triangle_c(double a, double h)
{
    return sqrt(h*h+a*a);
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        double r, c, w, h;
        cin >> r >> c >> w >> h;
 
        double tunnel_height=get_isosceles_triangle_h(c, r)+r;
        double train_r=get_isosceles_triangle_c(h/2, w);
 
        if(tunnel_height>w+h && train_r<r && w<r && w<c) cout << "TAK";
        else cout << "NIE";
        cout << endl;
    }
 
    return 0;
}
