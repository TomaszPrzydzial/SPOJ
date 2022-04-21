#include <iostream>
 
using namespace std;
 
int cities;
 
int main()
{
    cin >> cities;
 
    int *arr = new int [cities];
 
    long long int temp_sum, best_sum;
    int best_start_index, best_stop_index;
 
    temp_sum = best_sum = 0;
    best_start_index = 0;
    best_stop_index = cities;
 
    for(int i=0; i<cities; i++)
    {
        cin >> arr[i];
 
        if(temp_sum+arr[i]>=best_sum)
        {
            best_stop_index=i;
            best_sum = temp_sum + arr[i];
        }
 
        temp_sum += arr[i];
 
        if(temp_sum<0) temp_sum = 0;
 
    }
 
    temp_sum = best_sum = 0;
 
    for (int j=best_stop_index; j>=0; j--)
    {
        if(temp_sum+arr[j]>=best_sum)
        {
            best_start_index=j;
            best_sum = temp_sum + arr[j];
        }
 
        temp_sum += arr[j];
    }
 
    temp_sum = best_sum = 0;
 
    if(best_start_index>=0 && best_stop_index<cities)
    {
            for (int z = best_start_index; z<=best_stop_index; z++)
            {
                temp_sum+=arr[z];
            }
    }
 
 
    cout << temp_sum << endl;
 
    delete [] arr;
 
    return 0;
}
