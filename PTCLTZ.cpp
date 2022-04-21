#include <iostream>
 
using namespace std;
 
int s;
int previous_number;
int iterator_n;
 
int find_next_number()
{
    if(iterator_n==0) return s;
    else
    {
        int return_value;
 
        if(previous_number%2==0) return_value=previous_number/2;
        else return_value=3*previous_number+1;
 
        previous_number=return_value;
 
        return return_value;
    }
 
}
 
 
int main()
{
    int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        cin >> s;
        previous_number=s;
        iterator_n=0;
 
        while(true)
        {
            find_next_number();
            if(previous_number==1) break;
            iterator_n++;
        }
 
            cout << iterator_n << endl;
    }
 
    return 0;
}
