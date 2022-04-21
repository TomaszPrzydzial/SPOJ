#include <iostream>
 
using namespace std;
 
char chars_arr[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
 
string add_two_numbers(string A, string B, int base)
{
    string result;
    int reg=0;
 
    for(int i=A.length()-1; i>=0; i--)
    {
        int A_num, B_num;
 
        for(int k=0; k<16; k++) if(chars_arr[k]==A[i]) A_num=k;
        for(int k=0; k<16; k++) if(chars_arr[k]==B[i]) B_num=k;
 
        int digit = A_num+B_num+reg;
 
        result=chars_arr[digit%base]+result;
        reg=digit/base;
    }
 
    if(reg>0) result=to_string(reg)+result;
 
    return result;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int p;
        string num_A, num_B;
        cin >> p >> num_A >> num_B;
 
        cout << add_two_numbers(num_A, num_B, p) << endl;
    }
 
    return 0;
}
