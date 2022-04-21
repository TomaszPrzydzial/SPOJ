#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int nums;
    cin >> nums;
 
    int* nums_arr = new int[nums];
    int sum=0;
 
    for(int i=0; i<nums; i++)
    {
        cin >> nums_arr[i];
        sum+=nums_arr[i];
    }
 
    float avg = (float)sum/(float)nums;
 
    float lowest_diff=abs(nums_arr[0]-avg);
    int most_avg_index=0;
    for(int i=0; i<nums; i++)
    {
        if(abs(nums_arr[i]-avg)<lowest_diff)
        {
            most_avg_index=i;
            lowest_diff=abs(nums_arr[i]-avg);
        }
        else if(abs(nums_arr[i]-avg)==lowest_diff)
        {
            if(nums_arr[i]>nums_arr[most_avg_index]) most_avg_index=1;
        }
    }
 
    cout << nums_arr[most_avg_index] << endl;
 
    return 0;
}
