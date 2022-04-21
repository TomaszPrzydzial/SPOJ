#include <iostream>
 
using namespace std;
 
int calculate_lift_range(string reg)
{
    int lowest_point=0, highest_point=0, actual_floor=0;
 
    for(int i=0; i<reg.length(); i++)
    {
        if(reg[i]=='U') actual_floor++;
        else if(reg[i]=='D') actual_floor--;
 
        if(actual_floor>highest_point) highest_point=actual_floor;
        if(actual_floor<lowest_point) lowest_point=actual_floor;
    }
 
    return highest_point-lowest_point;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int floors;
        string lift_register;
        cin >> floors >> lift_register;
 
        int lift_range = calculate_lift_range(lift_register);
 
        if(lift_range<floors) cout << "TAK";
        else cout << "NIE";
        cout << endl;
    }
 
    return 0;
}
