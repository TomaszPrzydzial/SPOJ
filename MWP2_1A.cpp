#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int k;
        cin >> k;
 
        int* original_arr = new int[k];
        int* counter_arr = new int[k];
 
        fill(counter_arr, counter_arr + k, 0 );
 
        int best_shift=0;
 
        for(int i=1; i<=k; i++)
        {
            int number, shift;
            cin >> number;
 
            original_arr[i-1]=number;
 
            if(number<=i) shift=i-number;
            else shift=k-(number-i);
 
            //cout << shift << " ";
 
            counter_arr[shift]++;
 
            if(counter_arr[shift]>counter_arr[best_shift]) best_shift=shift;
        }
        
        for(int i=0; i<k; i++)
        {
            if(counter_arr[i]==counter_arr[best_shift])
            {
                best_shift=i;
                break;
            }
        }
 
        for(int i=best_shift; i<k; i++) cout << original_arr[i] << " ";
        for(int i=0; i<best_shift; i++) cout << original_arr[i] << " ";
 
        cout << endl;
 
        delete [] original_arr;
        delete [] counter_arr;
    }
 
    return 0;
}
