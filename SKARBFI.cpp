#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int tests, clues, x, y;
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        x = y = 0;
 
        cin >> clues;
 
        while(clues--)
        {
            int dir, steps;
 
            cin >> dir >> steps;
 
            switch(dir)
            {
                //north
                case 0: y+=steps;
                break;
 
                //south
                case 1: y-=steps;
                break;
 
                //west
                case 2: x-=steps;
                break;
 
                //east
                case 3: x+=steps;
                break;
 
            }
 
        }
 
        if(x==0 && y==0) cout << "studnia" << endl;
 
        if(y > 0) cout << "0 " << abs(y) << endl;
        else if (y < 0) cout << "1" << abs(y) << endl;
 
        if(x > 0) cout << "3 " << abs(x) << endl;
        else if (x < 0) cout << "2 " << abs(x) << endl;
 
    }
 
    return 0;
}
