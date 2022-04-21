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
        unsigned long long int n;
        cin >> n;
 
        cout << n*(n+1)*(2*n+1)/6 << endl;
    }
 
    return 0;
}
