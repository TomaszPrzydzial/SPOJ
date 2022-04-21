#include <iostream>
#include <string>
 
using namespace std;
 
int a, b;
 
int main()
{
    cin >> a >> b;
 
    string result = "f(x)=";
 
    if(a!=0)
    {
        if(a==1) result+="x";
        else if (a==-1) result+="-x";
        else result+=to_string(a)+"x";
    }
 
    if(b!=0)
    {
        if(b>0 && a!=0) result+="+"+to_string(b);
        else result+=to_string(b);
    }
 
    if(a==b && a==0) result = "f(x)=0";
 
 
    cout << result;
 
    return 0;
 
}
