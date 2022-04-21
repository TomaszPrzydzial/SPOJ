#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int days;
        cin >> days;
 
        int *arr = new int[days];
 
        int temp_period=0;
        int max_period=0;
 
        for(int i=0; i<days; i++) cin >> arr[i];
 
        for(int i=1; i<days-1; i++)
        {
            if((arr[i]<arr[i-1] && arr[i]<arr[i+1]) || (arr[i]>arr[i-1] && arr[i]>arr[i+1]))
            {
                temp_period++;
            }
            else temp_period=0;
 
            if(temp_period!=0 && temp_period+2>max_period) max_period=temp_period+2;
        }
 
        cout << max_period << endl;
    }
 
    return 0;
}
