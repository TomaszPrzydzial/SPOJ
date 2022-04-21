#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
 
    cin >> t;
 
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
 
        int* table = new int[n];
 
        for(int k=0; k<n; k++)
        {
            cin >> table[k];
        }
 
        for(int k=n-1; k>=0; k--)
        {
            cout << table[k] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}
