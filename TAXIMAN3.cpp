#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int k, tests;
    cin >> k >> tests;
 
    while(tests--)
    {
        int* start_pos = new int[k];
 
        unsigned long long int result=0;
 
        for(int i=0; i<k; i++) cin >> start_pos[i];
 
        for(int j=0; j<k; j++)
        {
            int num;
            cin >> num;
 
            if(start_pos[j]!=num) result+=abs(max(start_pos[j], num)-min(start_pos[j], num));
        }
 
        cout << result << endl;
 
        delete [] start_pos;
    }
 
    return 0;
}
