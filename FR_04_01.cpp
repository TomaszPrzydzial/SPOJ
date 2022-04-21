#include <iostream>
 
using namespace std;
 
int main()
{
    string code;
    cin >> code;
 
    for(int i=0; i<code.length(); i+=2)
    {
        int temp_code=10*(code[i]-48)+(code[i+1]-48);
        if(temp_code<30)
        {
            temp_code=temp_code*10+(code[i+2]-48);
            i++;
        }
        cout << char(temp_code);
    }
 
    return 0;
}
