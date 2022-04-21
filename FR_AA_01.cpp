#include <iostream>
 
using namespace std;
 
int main()
{
    int onsite=0;
 
    for(int i=0; i<4; i++)
    {
        int students, remotes;
        cin >> students >> remotes;
 
        onsite+=(students-remotes);
    }
 
    cout << onsite << endl;
 
    return 0;
}
