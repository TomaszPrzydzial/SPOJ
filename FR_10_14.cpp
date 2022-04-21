#include <iostream>
 
using namespace std;
 
int dec_to_base(int base, int num)
{
    int result=0;
 
    while(num!=0)
    {
        result+=num%base;
        num/=base;
    }
 
    return result;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int p, n;
        cin >> p >> n;
 
        cout << dec_to_base(p, n) << endl;
    }
 
    return 0;
}
