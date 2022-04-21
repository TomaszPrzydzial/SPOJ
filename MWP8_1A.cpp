#include <iostream>
 
using namespace std;
 
int get_GCD(int a, int b)
{
    int rest;
 
    do
    {
        rest=a%b;
 
        if(rest!=0)
        {
            a=b;
            b=rest;
        }
 
    } while (rest!=0);
 
    return b;
}
 
int main()
{
    int nums;
    cin >> nums;
 
    int** gcd_arr = new int*[nums];
    for(int i=0; i<nums; i++) gcd_arr[i] = new int[nums];
 
    int* number_arr = new int[nums];
    for(int i=0; i<nums; i++) cin >> number_arr[i];
 
    for(int i=0; i<nums; i++)
    {
        for(int k=0; k<nums; k++)
        {
           gcd_arr[i][k] = get_GCD(number_arr[i], number_arr[k]);
        }
 
    }
 
    for(int k=0; k<nums; k++)
    {
        for(int i=0; i<nums; i++) cout << gcd_arr[i][k] << " ";
        cout << endl;
    }
 
 
    return 0;
}
