#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int r, n;
 
    while(cin >> r)
    {
        if(r==0) break;
 
        char asterix = '*';
        char dot = '.';
 
        if(r<0) swap(asterix, dot);
 
        r=abs(r);
        n=2*r;
 
        bool prev_char = false;
 
        for(int y=1; y<=n; y++)
        {
            prev_char=false;
            if(y==r+1) swap(asterix, dot);
 
            for(int x=1; x<=n; x++)
            {
                if((x==y) || (x==n+1-y)) {cout << "*"; prev_char=true;}
                else
                {
                    if(prev_char==true) cout << dot;
                    else cout << asterix;
 
                    if(x==r) prev_char=false;
                }
            }
 
            cout << endl;
        }
 
        cout << endl;
 
    }
 
    return 0;
}
