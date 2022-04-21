#include <iostream>
#include <string>
#include <stdlib.h>
 
using namespace std;
 
int t, n, x, y;
 
int main()
{
    cin >> t;
 
    while(t--)
    {
        cin >> n >> x >> y;
 
        for(int i=0; i<n; i++)
        {
            if(i%x==0 && i%y!=0)
            cout << i << " " ;
        }
 
        cout << endl;
    }
 
    return 0;
}
