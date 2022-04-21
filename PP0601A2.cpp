#include <iostream>
 
using namespace std;
 
int actual_number;
int previous_number;
int tries;
 
int main()
{
    do
    {
        cin >> actual_number;
 
        cout << actual_number << endl;
 
        if(actual_number==42 && previous_number!=42 && previous_number!=0)
        {
            tries++;
        }
 
        previous_number = actual_number;
 
    } while (tries!=3);
 
 
    return 0;
}
