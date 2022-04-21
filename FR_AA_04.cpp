#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
    int d;
    cin >> d;
 
    set <int> temperatures;
 
    while(d--)
    {
        int temp;
        cin >> temp;
 
        temperatures.insert(temp);
    }
 
    cout << temperatures.size() << endl;
 
    return 0;
}
