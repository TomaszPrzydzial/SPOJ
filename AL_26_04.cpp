#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int nums;
        cin >> nums;
 
        int number_without_pair=0;
 
        while(nums--)
        {
            int number;
            cin >> number;
 
            number_without_pair ^= number;
        }
 
        cout << number_without_pair << endl;
    }
 
    return 0;
}
