#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
    double P1, P2, pole, P_ratio;
 
    while(cin >> P1 >> P2)
    {
 
        if(P1==P2) P_ratio=1;
        else P_ratio=P2/P1;
 
        pole = P1+P2+(P1+P2)*P_ratio;
 
        cout << fixed << setprecision(2) << pole << endl;
 
    }
 
    return 0;
}
