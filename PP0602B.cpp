    #include <iostream>
 
    using namespace std;
 
    int tests;
    int arr_row, arr_col;
 
    int main()
    {
 
        cin >> tests;
 
        while(tests--)
        {
            cin >> arr_row >> arr_col;
 
        int **arr = new int *[arr_row];
        for(int i=0; i< arr_row; i++)
        {
            arr[i] = new int[arr_col];
        }
 
        for(int i=0; i<arr_row; i++)
        {
            for(int j=0; j<arr_col; j++)
            {
                cin >> arr[i][j];
            }
        }
 
 
        //tilting
        int zero_mem = arr[0][0];
 
        //tilt top line
        for(int i=1; i<arr_col; i++)
        {
            arr[0][i-1]=arr[0][i];
        }
 
        //tilt right line
        for(int i=1; i<arr_row; i++)
        {
            arr[i-1][arr_col-1]=arr[i][arr_col-1];
        }
 
        //tilt bottom line
        for(int i=arr_col-1; i>0; i--)
        {
            arr[arr_row-1][i]=arr[arr_row-1][i-1];
        }
 
        //tilt left line
        for(int i=arr_row-1; i>0; i--)
        {
            arr[i][0]=arr[i-1][0];
        }
 
        //last number in mem
 
        arr[1][0]= zero_mem;
 
        //show array
        for(int c=0; c<arr_row; c++)
        {
            for(int r=0; r<arr_col; r++)
            {
                cout << arr[c][r] << " ";
            }
 
            cout << endl;
        }
 
        //deleting arrays
        for(int i=0; i< arr_row; i++)
        {
            delete [] arr[i];
        }
        delete [] arr;
        }
 
        return 0;
    }
