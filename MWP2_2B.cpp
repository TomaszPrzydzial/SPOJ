#include <iostream>
 
using namespace std;
 
string dec_to_bin(int num)
{
    string bin;
    bin.clear();
 
    while(num>0)
    {
        if(num%2==1) bin+='1';
        else bin+='0';
 
        num/=2;
    }
 
    return bin;
}
 
int main()
{
    unsigned long long int u, s, d;
 
    while(cin >> u >> s >> d)
    {
        if(u==0 && s==0 && d==0) break;
 
        string exponent = dec_to_bin(s);
 
        int *arr = new int[exponent.length()];
        int result=0;
 
        for(int i=0; i<exponent.length(); i++)
        {
            if(i==0) arr[0] = u%d;
            else if(i==1) arr[1] = (u*u)%d;
            else arr[i]=(arr[i-1]*arr[i-1])%d;
 
            if(exponent[i]=='1')
            {
                if(result==0) result=arr[i];
                else result*=arr[i];
                result%=d;
            }
        }
 
        cout << result << endl;
 
        delete [] arr;
    }
 
    return 0;
}
