#include <iostream>
#include <algorithm>
#include <math.h>
 
using namespace std;
 
int Xo, Yo, n;
double r;
 
int main()
{
    cin >> Xo >> Yo >> r;
 
    cin >> n;
 
    while(n--)
    {
        int x, y;
 
        double R;
 
        cin >> x >> y;
 
        R=sqrt(pow(Xo-x, 2)+pow(Yo-y, 2));
 
        if(R==r) cout << "E";
        else if(R<r) cout << "I";
        else cout << "O";
 
        cout << endl;
    }
 
    return 0;
}
