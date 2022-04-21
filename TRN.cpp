#include <iostream>
 
using namespace std;
 
int arr_row, arr_col;
 
int main()
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
 
 
    //show transpose array
 
 
    for(int c=0; c<arr_col; c++)
    {
        for(int r=0; r<arr_row; r++)
        {
            cout << arr[r][c] << " ";
        }
 
        cout << endl;
    }
 
 
 
    //deleting arrays
 
    for(int i=0; i< arr_row; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
 
    return 0;
}
