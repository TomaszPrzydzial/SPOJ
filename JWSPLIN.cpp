#include <iostream>
 
using namespace std;
 
int tests, Ax, Ay, Bx, By, Cx, Cy;
 
int main()
{
 
    cin >> tests;
 
    while(tests--)
    {
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
 
        if((Cy - Ay)*(Bx-Ax)-(By-Ay)*(Cx-Ax)==0) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
 
    return 0;
}
