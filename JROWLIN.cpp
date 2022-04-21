#include <iostream>
#include <iomanip>
 
using namespace std;
 
 
float a, b, c;
 
int main()
{
    cin >> a >> b >> c;
 
    if(a>0) cout << setprecision(2) << fixed << (-b+c)/a;
    else if(a==0 && (b-c)==0) cout << "NWR";
    else cout << "BR";
 
 
 
 
    return 0;
}
