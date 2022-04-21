#include <iostream>
#include <algorithm>
 
using namespace std;
 
float tri[3];
 
int main()
{
    while(cin >> tri[0] >> tri[1] >> tri[2])
    {
        sort(tri, tri + 3);
 
        if(tri[2]<tri[0]+tri[1]) cout << 1 << endl;
        else cout << 0 << endl;
    }
 
    return 0;
}
