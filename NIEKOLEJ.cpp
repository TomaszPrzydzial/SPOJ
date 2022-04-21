#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned int n;
 
    cin >> n;
 
    if(n==1 || n==2)
    {
        cout <<"NIE";
        return 0;
    }
 
    for(int i=1; i<=n; i+=2)
    {
        cout << i << " ";
    }
 
    for(int i=0; i<=n; i+=2)
    {
        cout << i << " ";
    }
 
    return 0;
}
