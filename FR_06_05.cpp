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
        int points;
        cin >> points;
 
        int prev_x, prev_y;
        double dist=0;
        bool check=false;
 
        while(points--)
        {
            int x, y;
            cin >> x >> y;
 
            if(check)
            {
                double a, b, c;
                a=max(x, prev_x)-min(x, prev_x);
                b=max(y, prev_y)-min(y, prev_y);
                c=sqrt(a*a+b*b);
 
                dist+=c/1000;
            }
 
            prev_x=x;
            prev_y=y;
            check=true;
        }
 
        cout << fixed << setprecision(2) << dist << endl;
    }
 
    return 0;
}
