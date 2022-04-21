#include <iostream>
 
using namespace std;
 
int main()
{
    int t, c, k, w;
 
    cin >> t;
 
    while(t--)
    {
        cin >> c >> k >> w;
 
        if(c*w<=k) cout << "yes";
        else cout << "no";
 
        cout << endl;
    }
 
    return 0;
}
