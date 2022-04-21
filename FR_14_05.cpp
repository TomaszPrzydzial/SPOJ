#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int minutes[10];
    fill_n(minutes, 10, 0);
 
    int hello=0;
    int people=0;
 
    while(n--)
    {
        int time;
        cin >> time;
 
        minutes[time-1]++;
    }
 
    for(int i=0; i<10; i++)
    {
        if(minutes[i]!=0)
        {
            int hello_now=0;
 
            if(people+minutes[i]>1)
            {
                hello_now=(people+minutes[i]);
                hello+=hello_now;
            }
 
            people+=minutes[i];
        }
    }
 
    cout << hello << endl;
 
    return 0;
}
