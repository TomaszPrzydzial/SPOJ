#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int k, n;
        cin >> k >> n;
 
        unsigned long long int result=n;
        for(int i=2; i<k; i++) result*=n;
        if(k>1) result*=n-1;
 
        cout << result << endl;
    }
 
 
    return 0;
}
