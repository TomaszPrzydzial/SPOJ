#include <iostream>
#include <vector>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k, n;
    cin >> k >> n;
 
    int pivot = n/k;
    int sum = pivot;
 
    vector <int> numbers;
    numbers.push_back(pivot);
 
    for(int i=1; i<=n/2; i++)
    {
        if(sum==n) break;
        sum += pivot+i;
        numbers.push_back(pivot+i);
 
        if(sum==n) break;
        sum += pivot-i;
        numbers.push_back(pivot-i);
    }
 
    sort(numbers.begin(), numbers.end());
 
    for(vector<int>::iterator it = numbers.begin() ; it != numbers.end(); ++it) cout << *it << " ";
 
    return 0;
}
