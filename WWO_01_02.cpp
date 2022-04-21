#include <iostream>
#include <math.h>
 
using namespace std;
 
#define BEIGE_YIELD 5
#define RED_YIELD 3
 
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
 
    cout << ceil(float(2*a*c+2*b*c)/BEIGE_YIELD)+ceil(float(a*b)/RED_YIELD) << endl;
 
    return 0;
}
