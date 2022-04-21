#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
bool tri_check(long double a, long double b, long double c)
{
    long double sides[3] = {a, b, c};
 
    sort(sides, sides + 3, greater <long double>());
 
    if(sides[0]<sides[1]+sides[2]) return true;
    else return false;
}
 
long double tri_area(long double a, long double b, long double c)
{
    if(!tri_check(a, b, c)) return 0;
 
    long double area;
 
    area = (a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c);
    area = 0.25 * sqrt(area);
 
    return area;
}
 
int main()
{
 
    unsigned int tests, kids;
    double chalk_efficiency;
 
    cin >> tests;
 
    while(tests--)
    {
        cin >> kids >> chalk_efficiency;
 
        int a, b, c;
        long double area_sum = 0;
 
        while(kids--)
        {
            cin >> a >> b >> c;
 
            area_sum += tri_area(a/100.0, b/100.0, c/100.0)*chalk_efficiency*1000;
        }
 
        cout << static_cast<int>(round(area_sum)) << endl;
 
    }
 
    return 0;
}
