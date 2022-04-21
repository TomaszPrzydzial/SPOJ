#include <iostream>
#include <algorithm>
#include <math.h>
 
using namespace std;
 
float tri[3];
 
int main()
{
    while(cin >> tri[0] >> tri[1] >> tri[2])
    {
        sort(tri, tri + 3);
 
        if(tri[0]<=0 || tri[1]<=0 || tri[2]<=0) cout << "brak" << endl;
        else
        {
            if(tri[2]>=tri[0]+tri[1]) cout << "brak" << endl;
            else if(pow(tri[2], 2)==pow(tri[0], 2)+pow(tri[1], 2)) cout << "prostokatny" << endl;
            else if(pow(tri[2], 2)>pow(tri[0], 2)+pow(tri[1], 2)) cout << "rozwartokatny" << endl;
            else cout << "ostrokatny" << endl;
        }
 
    }
 
    return 0;
}
