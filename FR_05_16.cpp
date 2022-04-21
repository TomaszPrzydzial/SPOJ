#include <iostream>
#include <vector>
 
using namespace std;
 
vector <int> int_stack;
 
void do_math_operation(int op_idx)
{
    //0 - add, 1 - sub, 2 - multiply, 3 - divide
 
    int result;
 
    int x=int_stack[int_stack.size()-1];
    int_stack.pop_back();
    int y=int_stack[int_stack.size()-1];
    int_stack.pop_back();
 
    switch(op_idx)
    {
        case 0: result=y+x; break;
        case 1: result=y-x; break;
        case 2: result=y*x; break;
        case 3: result=y/x; break;
    }
 
    int_stack.push_back(result);
}
 
int main()
{
    int queries;
    cin >> queries;
 
    while(queries--)
    {
        int number;
 
        char op;
        cin >> op;
 
        bool operation=false;
 
        switch(op)
        {
            case '0':
            operation=true;
            cin >> op;
            break;
 
            case '1':
            cin >> number;
            break;
        }
 
        if(operation)
        {
            switch(op)
            {
                case '+': do_math_operation(0); break;
                case '-': do_math_operation(1); break;
                case '*': do_math_operation(2); break;
                case '/': do_math_operation(3); break;
            }
        }
        else int_stack.push_back(number);
    }
 
    cout << int_stack[0] << endl;
    cout << "ONP" << endl;
 
    return 0;
}
