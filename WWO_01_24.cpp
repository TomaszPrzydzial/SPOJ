#include <iostream>
#include <math.h>
 
using namespace std;
 
string get_bin_num(int bin_length)
{
    string number;
 
    while(bin_length--)
    {
        char temp_char;
        cin >> temp_char;
        number+=temp_char;
    }
 
    return number;
}
 
void uni_bin_size(string* bin_num, int max_size)
{
    for(int i=bin_num->length(); i<max_size; i++)
    {
        *bin_num='0'+*bin_num;
    }
}
 
int main()
{
    int first_l, second_l;
    cin >> first_l >> second_l;
 
    string first, second;
 
    first=get_bin_num(first_l);
    second=get_bin_num(second_l);
 
    int max_l = max(first_l, second_l);
 
    if(first_l>=second_l) uni_bin_size(&second, first_l);
    else uni_bin_size(&first, second_l);
 
    bool reg=false;
    string result;
 
    for(int i=max_l-1; i>=0; i--)
    {
        int temp=0;
 
        if(first[i]==49) temp++;
        if(second[i]==49) temp++;
        if(reg) temp++;
 
        switch(temp)
        {
            case 0: result='0'+result; reg=false; break;
            case 1: result='1'+result; reg=false; break;
            case 2: result='0'+result; reg=true; break;
            case 3: result='1'+result; reg=true; break;
        }
    }
 
    if(reg) result='1'+result;
 
    cout << result << endl;
 
    return 0;
}
