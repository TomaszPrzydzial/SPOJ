#include <iostream>
 
using namespace std;
 
int tests;
int arr_length;
int seek_index;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> arr_length;
 
        int *arr = new int[arr_length];
 
        long long sum, new_sum;
 
        seek_index=arr_length;
        sum=new_sum=0;
 
        for(int i=0; i<arr_length; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
 
        new_sum+=arr[0];
        sum-=new_sum;
 
        for(int i=1; i<arr_length; i++)
        {
            if(sum!=new_sum)
            {
                sum-=arr[i];
                new_sum+=arr[i];
            }
            else
            {
                seek_index=i;
                break;
            }
 
        }
 
        if(seek_index!=arr_length) cout << seek_index;
        else cout << 0;
 
        cout << endl;
 
        delete [] arr;
 
    }
 
    return 0;
}
