#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int a, b;
        cin >> a >> b;
 
        if(a%2==0) a+=2;
        else a++;
 
        bool exist=false;
        for(int i=a; i<b; i+=2) {cout << i << " "; exist=true;}
 
        if(!exist) cout << "BRAK";
        cout << endl;
    }
 
    return 0;
}
