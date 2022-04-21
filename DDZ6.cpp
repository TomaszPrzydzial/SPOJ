#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
unsigned long long int get_GCD(int a, int b)
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
 
bool compare_eukl(int A, int B)
{
    if(get_GCD(A, 1260)==get_GCD(B, 1260)) return A < B;
    else return get_GCD(A, 1260) > get_GCD(B, 1260);
}
 
int main()
{
    int tests;
    cin >> tests;
 
    vector <int> vec;
 
    while(tests--)
    {
        int num;
        cin >> num;
 
        vec.push_back(num);
    }
 
    sort(vec.begin(), vec.end(), &compare_eukl);
 
    for(int i=0; i<vec.size(); i++) cout << vec[i] << " ";
 
    return 0;
}
