#include <iostream>
 
using namespace std;
 
string result = "";
 
void add_letter(char letter)
{
    result += letter;
}
 
void remove_letter(int number)
{
    if(number>=result.length()) result="";
    else result=result.substr(0, result.length()-number);
}
 
void change_letter(char letter)
{
    if(result.length()!=0) result[result.length()-1]=letter;
}
 
int main()
{
    int d;
    cin >> d;
 
    while(d--)
    {
        string instruction;
        cin >> instruction;
 
        if(instruction=="DODAJ")
        {
            char to_add;
            cin >> to_add;
 
            add_letter(to_add);
        }
        else if(instruction=="USUN")
        {
            int num;
            cin >> num;
 
            remove_letter(num);
        }
        else if(instruction=="ZAMIEN")
        {
            char to_change;
            cin >> to_change;
 
            change_letter(to_change);
        }
    }
 
    cout << result << endl;
 
    return 0;
}
