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
                  cin >> arr[i];
              }
     
              //wypisanie tablicy parzystej
              for(int i=0; i<arr_size; i++)
              {
                  if((i+1)%2==0)cout << arr[i] << " ";
              }
     
              for(int i=0; i<arr_size; i++)
              {
                  if((i+1)%2==1)cout << arr[i] << " ";
              }
     
                cout << endl;
     
                delete [] arr;
            }
     
            return 0;
        }
     
