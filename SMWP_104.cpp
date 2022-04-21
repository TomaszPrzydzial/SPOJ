#include <iostream>
 
using namespace std;
 
int get_GCD(int a, int b)
{
    int rest;
 
    do
    {
        rest=a%b;
 
        if(rest!=0)
        {
            a=b;
            b=rest;
        }
 
    } while (rest!=0);
 
    return b;
}
 
int get_LCM(int a, int b)
{
    return (a/get_GCD(a, b))*b;
}
 
int main()
{
    int runners;
    cin >> runners;
 
    int runners_LCM=1;
 
    while(runners--)
    {
        int runner_speed;
        cin >> runner_speed;
 
        runners_LCM=get_LCM(runners_LCM, runner_speed);
    }
 
    cout << runners_LCM << endl;
 
    return 0;
}
