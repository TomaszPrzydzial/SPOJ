#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y;
    cin >> x >> y;
 
    for(int i=x; i<=y; i++)
    {
        if(i%6==0) cout << "ab";
        else if(i%2==0 && i%3!=0) cout << "a";
        else if(i%2!=0 && i%3==0) cout << "b";
    }
 
    cout << endl;
 
    return 0;
}
