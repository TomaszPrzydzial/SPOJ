#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    int coins;
    cin >> coins;
 
    vector <int> coins_A, coins_B;
 
    for(int i=0; i<coins; i++)
    {
        int num;
        cin >> num;
 
        coins_A.push_back(num);
    }
 
    for(int i=0; i<coins; i++)
    {
        int num;
        cin >> num;
 
        coins_B.push_back(num);
    }
 
    sort(coins_A.begin(), coins_A.end());
    sort(coins_B.begin(), coins_B.end());
 
    bool could_change=true;
 
    for(int i=0; i<coins; i++)
    {
        if(coins_A[i]!=coins_B[i]) {could_change=false; break;}
    }
 
    if(could_change) cout << "TAK\n";
    else cout << "NIE\n";
 
    return 0;
}
