#include <iostream>
 
using namespace std;
 
int main()
{
    int d;
    cin >> d;
 
    unsigned short int sticks[256];
 
    fill(sticks, sticks+256, 0);
 
    while(d--)
    {
        unsigned short length;
        cin >> length;
 
        sticks[length-1]++;
    }
 
    int sum=0;
 
    for(int i=0; i<256; i++)
    {
        sum+=sticks[i]/3;
    }
 
    cout << sum << endl;
 
    return 0;
}
