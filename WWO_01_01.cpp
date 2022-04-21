#include <iostream>
 
using namespace std;
 
bool is_female(string name)
{
    if(name[name.length()-1]=='a') return true;
    else return false;
}
 
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
 
    int males=0, females=0;
 
    for(int i=0; i<a+b+c; i++)
    {
        string name;
        cin >> name;
 
        if(is_female(name)) females++;
        else males++;
    }
 
    cout << min(males, females) << endl;
 
    return 0;
}
