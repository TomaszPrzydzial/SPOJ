#include <iostream>
#include <list>
 
using namespace std;
 
int t, n, sum;
float avr;
 
int main()
{
 
    cin >> t;
 
    while(t--)
    {
       cin >> n;
 
       int *arr;
       arr = new int[n];
       sum=0;
 
       for(int i=0; i<n; i++)
       {
           cin >> arr[i];
           sum += arr[i];
       }
 
       avr =((float)sum/(float)n);
 
       float choice = (float)arr[0];
       float diffrence = abs((avr-choice));
 
       for(int i=0; i<n; i++)
       {
           if(abs(avr-(float)arr[i])<diffrence)
           {
 
               choice = (float)arr[i];
               diffrence = abs((avr-choice));
 
           }
 
 
    }
 
       cout << choice << endl;
 
    }
 
 
    return 0;
}
