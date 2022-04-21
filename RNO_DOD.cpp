#include <iostream>
     
using namespace std;
     
int main()
{
    int tests;
    cin >> tests;
     
    for (int i=0; i<tests; i++)
    {
        int nums;
        cin >> nums;
        
        int sum = 0;
        
        for (int k=0; k<nums; k++)
        {
            int temp_num;
            cin >> temp_num;
            sum += temp_num;
        }
     
        cout << sum << endl;
    }
     
    return 0;
}
