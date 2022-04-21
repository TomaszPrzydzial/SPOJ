#include <iostream>
 
using namespace std;
 
unsigned long long int cuts(unsigned long long int *n)
{
    unsigned long long int pieces=1;
    int temp=1;
 
    while(pieces<*n)
    {
        pieces+=temp;
        temp++;
    }
 
    return temp-1;
}
 
int main()
{
    unsigned long long int pieces;
 
    while(cin >> pieces)
    {
        cout << cuts(&pieces) << endl;
    }
 
    return 0;
}
