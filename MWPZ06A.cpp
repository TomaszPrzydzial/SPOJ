#include <iostream>
#include <math.h>
 
using namespace std;
 
int d, x, y, z;
 
int main()
{
 
    cin >> d;
 
    while(d--)
    {
        float child;
 
        cin >> x >> y >> z;
 
        child = (float)(x+y-z*y)/(z-1);
 
        cout << 0-round(12*child) << endl;
    }
 
 
    return 0;
}
