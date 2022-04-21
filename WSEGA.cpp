#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        unsigned int segments, legs, days;
 
        segments=0;
        legs=0;
 
        cin >> segments;
 
        for(int i=0; i<segments; i++)
        {
            unsigned int temp_seg_legs;
 
            cin >> temp_seg_legs;
 
            legs+=temp_seg_legs;
        }
 
        days=segments-1+legs;
 
        cout << days << endl;
    }
 
    return 0;
}
