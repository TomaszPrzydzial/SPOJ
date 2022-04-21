#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int q;
    cin >> q;
 
    while(q--)
    {
        string n;
        cin >> n;
 
        int f;
        unsigned long long int result=5;
 
        if(n[0]=='p') f=4;
        else f=5;
 
        if(n.length()!=1)
        {
            for(int i=n.length()-1; i>1; i--)
            {
                result*=5;
                result%=1000000007;
            }
 
            result*=f;
            result%=1000000007;
        }
 
        cout << result << endl;
    }
 
    return 0;
}
