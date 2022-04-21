#include <iostream>
 
using namespace std;
 
int main()
{
    int sets;
    cin >> sets;
 
    while(sets--)
    {
        bool correct = true;
        int entries;
        cin >> entries;
 
        int A_entries = 0;
        int B_entries = 0;
 
        while(entries--)
        {
            string op;
            cin >> op;
 
            if(op=="AI") A_entries++;
            else if(op=="BI") B_entries++;
            else if(op=="AO") B_entries--;
            else if(op=="BO") A_entries--;
 
 
            if(A_entries<0 || B_entries<0) correct = false;
        }
 
        if(correct) cout << A_entries+B_entries << endl;
        else cout << "ERROR" << endl;
    }
 
    return 0;
}
