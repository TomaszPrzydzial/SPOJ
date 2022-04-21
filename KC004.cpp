#include <iostream>
 
using namespace std;
 
double seek_number;
int arr_length, occurence;
 
int main()
{
    while(cin >> seek_number >> arr_length)
    {
        occurence=0;
 
        double *arr = new double [arr_length];
 
        for(int i=0; i<arr_length; i++)
        {
            cin >> arr[i];
            if(arr[i]==seek_number) occurence++;
        }
 
        cout << occurence << endl;
 
        delete [] arr;
    }
 
    return 0;
}
