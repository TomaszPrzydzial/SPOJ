#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int n;
 
    cin >> n;
 
    while(n--)
    {
        string binary_num;
 
        cin >> binary_num;
 
        bool is_divided_by_ten=false;
        int position=0;
        int sum=0;
 
        if(binary_num[binary_num.length()-1]=='1') goto exit;
 
        for(int i=binary_num.length()-2; i>=0; i--)
        {
            if(binary_num[i]=='1')
            {
                switch(position)
                {
                    case 0: sum+=2; break;
                    case 1: sum+=4; break;
                    case 2: sum+=8; break;
                    case 3: sum+=6; break;
                }
            }
 
            if(position==3) position=0;
            else position++;
        }
 
        if(sum%10==0) is_divided_by_ten=true;
 
        exit:
        if(is_divided_by_ten) cout << "Tak" << endl;
        else cout << "Nie" << endl;
    }
 
    return 0;
}
