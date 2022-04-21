#include <iostream>
 
using namespace std;
 
string add_two_numbers(string A, string B)
{
    string result;
    int reg=0;
 
    for(int i=A.length()-1; i>=0; i--)
    {
        int digit = (A[i]-'0')+(B[i]-'0')+reg;
        //cout << A[i] << " + " << B[i] << " + " << reg <<" = " << digit << endl;
        result=to_string(digit%10)+result;
        reg=digit/10;
    }
 
    if(reg>0) result=to_string(reg)+result;
 
    return result;
}
 
string fill_with_zero(string line, int length)
{
    string zeros;
 
    for(int i=0; i<length-line.length(); i++) zeros+='0';
 
    return zeros+line;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string num_A, num_B;
        cin >> num_A >> num_B;
 
        if(num_A.length()<num_B.length()) num_A=fill_with_zero(num_A, num_B.length());
        else if(num_A.length()>num_B.length()) num_B=fill_with_zero(num_B, num_A.length());
 
        cout << add_two_numbers(num_A, num_B) << endl;
    }
 
    return 0;
}
