#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>
 
using namespace std;
 
vector <unsigned long long int> collections;
 
int get_index(unsigned long long int number)
{
    int left=0;
    int right=collections.size()-1;
    int index;
 
    while(left<right)
    {
        index=floor((left+right)/2);
        if(collections[index]>number) right = index;
        else left = index+1;
    }
 
    return right;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int players;
    cin >> players;
 
    while(players--)
    {
        unsigned long long int tazos;
        cin >> tazos;
 
        collections.push_back(tazos);
    }
 
    sort(collections.begin(), collections.end());
 
    int queries;
    cin >> queries;
 
    int col_size=collections.size();
    
    while(queries--)
    {
        unsigned long long int look_for;
        cin >> look_for;
 
        if(look_for>=collections[col_size-1]) cout << 0;
        else
        {
            int idx = get_index(look_for);
            cout << col_size-idx;
        }
        cout << endl;
    }
 
    return 0;
}
