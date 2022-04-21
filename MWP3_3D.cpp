#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int tests;
unsigned long long int persons, cuts;
double side, length;
const double pi = acos(-1.0);
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> side >> persons;
 
        if (10<=side && side<=100000000 && 3<=persons && persons<=1000000)
        {
            if(persons%2==0)
            {
                length = (2*pi*(side/2))/persons;
                cuts=persons/2;
            }
            else
            {
                cuts=persons;
                length = (2*pi*(side/2))/(persons*2);
            }
 
            cout << setprecision(3) << fixed << length << " " << cuts << endl;
        }
    }
 
    return 0;
}
