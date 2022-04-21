#include <iostream>
#include <string.h>
 
using namespace std;
 
char number[1000];
 
int main()
{
    while(cin >> number)
    {
        if(int(number[0]-48)==0) return 0;
 
        int last_number;
        last_number = 0;
 
        bool counter;
        counter = 0;
 
        int sum;
        sum = 0;
 
        for(int i=sizeof(number)-1; i>=0; i--)
        {
            if(number[i]!=0 && counter==false)
            {
                last_number=(int)(number[i]-48);
                counter=true;
            }
 
            if(number[i]!=0) sum+=(int)(number[i]-48);
        }
 
        if(sum%3==0 && (last_number==0 || last_number==5)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
 
        memset(number, 0, sizeof(number));
    }
 
    return 0;
}
