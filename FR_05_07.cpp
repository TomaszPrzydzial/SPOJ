#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned short int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        unsigned short int length;
 
        cin >> length;
 
        unsigned short int *num_arr = new unsigned short int[length];
 
        for(int i=0; i<length; i++)
        {
            cin >> num_arr[i];
        }
 
        while(num_arr[0]!=0)
        {
            int result=0;
 
            for(int i=0; i<length; i++)
            {
                if(num_arr[i]!=0) {result++; num_arr[i]--;}
            }
 
            cout << result << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}
