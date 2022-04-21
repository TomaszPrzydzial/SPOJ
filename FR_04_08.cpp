#include <iostream>
 
using namespace std;
 
string int_to_s(int num, int digits)
{
    string result_s=to_string(num);
 
    while(result_s.length()<digits) result_s="0"+result_s;
 
    return result_s;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int a, b;
        cin >> a >> b;
 
        int ab = a*b;
 
        string** arr = new string*[a];
        for(int i=0; i<a; i++) arr[i] = new string[b];
 
        int x_low_limit=0;
        int x_high_limit=b-1;
        int y_low_limit=0;
        int y_high_limit=a-1;
        int actual_num=1;
 
        int digits=(to_string(ab)).length();
 
        while(ab>=actual_num)
        {
            //right
            for(int i=x_low_limit; i<=x_high_limit; i++)
            {
                if(actual_num>ab) break;
                arr[y_low_limit][i]=int_to_s(actual_num, digits);
                actual_num++;
            }
            y_low_limit++;
 
            //down
            for(int i=y_low_limit; i<=y_high_limit; i++)
            {
                if(actual_num>ab) break;
                arr[i][x_high_limit]=int_to_s(actual_num, digits);
                actual_num++;
            }
            x_high_limit--;
 
            //left
            for(int i=x_high_limit; i>=x_low_limit; i--)
            {
                if(actual_num>ab) break;
                arr[y_high_limit][i]=int_to_s(actual_num, digits);
                actual_num++;
            }
            y_high_limit--;
 
            //up
            for(int i=y_high_limit; i>=y_low_limit; i--)
            {
                if(actual_num>ab) break;
                arr[i][x_low_limit]=int_to_s(actual_num, digits);
                actual_num++;
            }
            x_low_limit++;
        }
 
        for(int i=0; i<a; i++)
        {
            for(int k=0; k<b; k++)
            {
                cout << arr[i][k];
                if(k!=b-1) cout << " ";
                else cout << "\n";
            }
        }
 
        delete [] arr;
    }
 
    return 0;
}
