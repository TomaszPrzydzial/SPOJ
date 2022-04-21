#include <iostream>
#include <string.h>
 
using namespace std;
 
char input[25];
int code[26]={1,2,3,4,5,6,7,8,9,0,10,20,30,40,50,60,70,80,90,100,0,200,0,300,400,500};
int code_num;
 
int main()
{
 
        cin.getline(input, sizeof(input));
 
        for(int i=0; i<sizeof(input); i++)
        {
            if((int)input[i]-97>=0) code_num+=code[(int)input[i]-97];
        }
 
        cout << code_num << endl;
 
        memset(input, 0, sizeof(input));
 
 
 
    return 0;
}
