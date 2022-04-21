#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    string word;
 
    cin >> n;
    cin >> word;
 
    int cut=n/2;
 
    while(cut>=0)
    {
        for(int i=0; i<n; i++)
        {
            if(i>=cut & i<n-cut) cout << word[i];
            else cout << ".";
        }
        cut--;
        cout << endl;
    }
 
    return 0;
}
