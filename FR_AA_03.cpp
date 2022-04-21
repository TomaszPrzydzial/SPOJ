#include <iostream>
 
using namespace std;
 
char a_stack[3];
int stack_index=0;
 
int main()
{
    string seq;
    cin >> seq;
 
    int marks=0;
 
    for(int i=0; i<seq.length(); i++)
    {
        if(stack_index==0)
        {
            a_stack[0]=seq[i];
            stack_index++;
        }
        else
        {
            if(a_stack[stack_index-1]==seq[i])
            {
                a_stack[stack_index]=seq[i];
                stack_index++;
            }
            else
            {
                stack_index--;
            }
        }
 
        if(stack_index==3)
        {
            if(a_stack[0]=='+') cout << "5 ";
            else cout << "1 ";
 
            stack_index=0;
            marks++;
        }
    }
 
    if(marks==0) cout << "BRAK";
    cout << endl;
 
    return 0;
}
