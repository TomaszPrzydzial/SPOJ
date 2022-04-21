#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    int sx, sy, n;
    cin >> sx >> sy >> n;
 
    int result_x, result_y;
    double result_dist=0;
 
    while(n--)
    {
        int nx, ny;
        cin >> nx >> ny;
 
        double a, b, c;
        a=max(sx, nx)-min(sx, nx);
        b=max(sy, ny)-min(sy, ny);
        c=sqrt(a*a+b*b);
 
        if(c>result_dist)
        {
            result_dist=c;
            result_x=nx;
            result_y=ny;
        }
    }
 
    cout << result_x << " " << result_y << endl;
    cout << fixed << setprecision(2) << result_dist << endl;
 
    return 0;
}
