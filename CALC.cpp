#include <iostream>
 
using namespace std;
 
char operat;
long a, b;
 
 
int main()
{
    while(cin >> operat)
    {
        cin >> a >> b;
 
        long int result;
 
        switch(operat)
        {
            case '+': result = a+b;
            break;
 
            case '-': result = a-b;
            break;
 
            case '*': result = a*b;
            break;
 
            case '/': result = a/b;
            break;
 
            case '%': result = a%b;
            break;
        }
 
        cout << result << endl;
    }
 
    return 0;
}
