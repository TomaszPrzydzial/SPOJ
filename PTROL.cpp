#include <iostream>
 
using namespace std;
 
 
int t, n;
 
int main()
{
    cin >> t;
 
    while(t--)
    {
      int arr_size;
 
      cin >> arr_size;
 
      int *arr;
      arr = new int[arr_size];
 
      //uzupelnienie tablicy
      for(int i=0; i<arr_size; i++)
      {
          if(i!=0) cin >> arr[i-1];
          else cin >> arr[arr_size-1];
      }
 
      //wypisanie tablicy
      for(int i=0; i<arr_size; i++)
      {
          cout << arr[i] << " ";
      }
 
        cout << endl;
 
        delete [] arr;
    }
 
    return 0;
}
