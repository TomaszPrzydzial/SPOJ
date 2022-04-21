#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned long long int n;
 
    while(cin >> n)
    {
        unsigned long long int result=1;
        int devider;
        bool A_move=true;
 
        while(result<n)
        {
            if(A_move) devider = 9;
            else devider = 2;
 
            result*=devider;
 
            A_move = !A_move;
        }
 
        if(devider==9) cout << "A\n";
        else cout << "B\n";
 
    }
 
    return 0;
}
