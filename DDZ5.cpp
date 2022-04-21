#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
unsigned int n;
unsigned int arr[3];
unsigned int sum=0;
short int idx=n%3;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> n;
 
    n-=1;
 
    cin >> arr[idx];
 
    n-=1;
    idx-=1;
    if(idx==-1) idx=2;
 
    cin >> arr[idx];
 
    while(n--)
    {
        idx-=1;
        if(idx<0) idx=2;
 
        cin >> arr[idx];
 
        switch(idx)
        {
            case 0: if(arr[0]==arr[1]+arr[2]) sum+=1; break;
            case 1: if(arr[1]==arr[0]+arr[2]) sum+=1; break;
            case 2: if(arr[2]==arr[0]+arr[1]) sum+=1; break;
        }
    }
 
    cout << sum << "\n";
 
    return 0;
}
