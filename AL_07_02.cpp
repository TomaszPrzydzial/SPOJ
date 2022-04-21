#include <iostream>
#include <string.h>
#include <math.h>
 
using namespace std;
 
int main()
{
    short unsigned int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        int sx, sy, mx, my, d;
        string winds;
 
        cin >> sx >> sy >> mx >> my >> d >> winds;
 
        int xDistance, yDistance;
 
        xDistance = abs(sx-mx);
        yDistance = abs(sy-my);
 
        char xDir, yDir;
 
        if(sx<mx) xDir = 'E';
        else if(sx>mx) xDir = 'W';
        else xDir = NULL;
 
        if(sy<my) yDir = 'N';
        else if(sy>my) yDir = 'S';
        else yDir = NULL;
 
        int days = -1;
 
        for(int i=0; i<=winds.length(); i++)
        {
            if(xDistance==0 && yDistance==0){days=i; break;}
 
            if(winds[i]==xDir && xDistance>0) xDistance--;
            if(winds[i]==yDir && yDistance>0) yDistance--;
        }
 
        if(days!=-1) cout << days;
        else cout << "NIE";
        cout << endl;
    }
 
    return 0;
}
