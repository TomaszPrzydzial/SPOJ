#include <iostream>
#include <vector>
 
using namespace std;
 
vector <int> x_side, num_side;
 
void push_number(int num, bool is_x, bool left_side)
{
    int number_to_push=num;
 
    if(is_x==true && left_side==false) number_to_push*=-1;
    if(is_x==false && left_side==true) number_to_push*=-1;
 
    if(is_x==true) x_side.push_back(number_to_push);
    else num_side.push_back(number_to_push);
 
    return;
}
 
void get_math_expression()
{
    string math_expr;
    cin >> math_expr;
 
    int temp_num=0;
    int multiplier=1;
    bool left_side=false;
    bool x_number=false;
 
    for(int i=math_expr.length()-1; i>=0; i--)
    {
        if(math_expr[i]==120) x_number=true; //x
 
        if(math_expr[i]>=48 && math_expr[i]<=57)
        {
            temp_num+=multiplier*(math_expr[i]-48);
            multiplier*=10;
        }
 
        if(math_expr[i]==61) //=
        {
            if(x_number==true && temp_num==0) temp_num=1;
            push_number(temp_num, x_number, left_side);
 
            left_side=true;
 
            multiplier=1;
            temp_num=0;
            x_number=false;
        }
        if(math_expr[i]==43) //+
        {
            if(x_number==true && temp_num==0) temp_num=1;
            push_number(temp_num, x_number, left_side);
 
            multiplier=1;
            temp_num=0;
            x_number=false;
        }
        if(math_expr[i]==45) //-
        {
            if(x_number==true && temp_num==0) temp_num=1;
            temp_num*=-1;
            push_number(temp_num, x_number, left_side);
 
            multiplier=1;
            temp_num=0;
            x_number=false;
        }
 
    }
 
    if(x_number==true && temp_num==0) temp_num=1;
    push_number(temp_num, x_number, left_side);
 
    return;
}
 
int main()
{
    int t;
 
    cin >> t;
 
    while(t--)
    {
 
        get_math_expression();
 
        int x_sum=0;
        int num_sum=0;
 
        for(int i=0; i<x_side.size(); i++) x_sum += x_side[i];
        for(int i=0; i<num_side.size(); i++) num_sum += num_side[i];
 
        if(x_sum!=0) cout << num_sum/x_sum;
        else cout << "NIE";
 
        cout << endl;
 
        x_side.clear();
        num_side.clear();
    }
 
    return 0;
}
