#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int tests;
 
    cin >> tests;
 
    while(tests--)
    {
 
       string base7_num;
 
       cin >> base7_num;
 
       int sum;
       int alternate_sum;
 
       sum=0;
       alternate_sum=0;
 
       for(int i=0; i<base7_num.length(); i++)
       {
           sum += base7_num[i]-48;
 
           if((i&1)==1) alternate_sum -= base7_num[i]-48;
           else alternate_sum += base7_num[i]-48;
       }
 
       if(sum%6 == 0) cout << "TAK ";
       else cout << "NIE ";
 
       if(alternate_sum%8 == 0) cout << "TAK ";
       else cout << "NIE ";
 
       if(base7_num.length()>3 && base7_num[base7_num.length()-1]=='0' && base7_num[base7_num.length()-2]=='0' && base7_num[base7_num.length()-3]=='0') cout << "TAK" << endl;
       else if(base7_num.length()==1 && base7_num[0]=='0') cout << "TAK" << endl;
       else cout << "NIE" << endl;
 
 
    }
 
    return 0;
}
