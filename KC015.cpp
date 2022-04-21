#include <iostream>
 
using namespace std;
 
bool check_equality(string num1, string num2)
{
    bool numbers_equal=true;
 
    if(num1.length()==num2.length())
    {
        for(int i=0; i<num1.length(); i++)
        {
            if(num1[i]!=num2[i])
            {
                numbers_equal=false;
                break;
            }
        }
    }
    else numbers_equal=false;
 
    return numbers_equal;
}
 
bool check_lower(string num1, string num2)
{
    //sprawdzamy czy 1 jest mniejszy lub rowny od 2
 
    if(num1.length()<num2.length()) return 1;
    else if(num1.length()>num2.length()) return 0;
    else
    {
        for(int i=0; i<num1.length(); i++)
        {
            if(num1[i]>num2[i]) return 0;
            else if (num1[i]<num2[i]) return 1;
        }
    }
}
 
bool check_higher(string num1, string num2)
{
    //sprawdzamy czy 1 jest wiekszy lub rowny od 2
 
    if(num1.length()>num2.length()) return 1;
    else if(num1.length()<num2.length()) return 0;
    else
    {
        for(int i=0; i<num1.length(); i++)
        {
            if(num1[i]<num2[i]) return 0;
            else if (num1[i]>num2[i]) return 1;
        }
    }
}
 
 
int main()
{
    string number1, number2, statement;
 
    while(cin >> number1 >> statement >> number2)
    {
        if(statement=="==") cout << check_equality(number1, number2) << endl;
        if(statement=="!=") cout << !check_equality(number1, number2) << endl;
        if(statement=="<=") cout << check_lower(number1, number2) << endl;
        if(statement==">=") cout << check_higher(number1, number2) << endl;
    }
 
    return 0;
}
