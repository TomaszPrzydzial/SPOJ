#include <iostream>
 
using namespace std;
 
int testy;
string day;
string week[7]={"Pn", "Wt", "Sr", "Cz", "Pt", "So", "Nd"};
int rot;
 
int main()
{
    cin >> testy;
 
    while(testy--)
    {
        cin >> day >> rot;
 
        rot=rot%7;
 
        for(int i=0; i<7; i++)
        {
            if(day==week[i])
            {
                if(i+rot<7) cout << week[i+rot] << endl;
                else cout << week[i+rot-7] << endl;
            }
        }
 
    }
 
    return 0;
 
}
