#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
unsigned long long int get_GCD(unsigned long long int a, unsigned long long int b)
{
    unsigned long long int rest;
 
    do
    {
        rest=a%b;
 
        if(rest!=0)
        {
            a=b;
            b=rest;
        }
 
    } while (rest!=0);
 
    return b;
}
 
unsigned long long int get_LCM(unsigned long long int a, unsigned long long int b)
{
    return (a/get_GCD(a, b))*b;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string frac_01, frac_02;
    cin >> frac_01 >> frac_02;
 
    string frac_total=frac_01+"/"+frac_02+"/";
 
    string temp_num;
    unsigned long long int factorials[4];
    int idx=0;
 
    for(int i=0; i<frac_total.length(); i++)
    {
        if(frac_total[i]=='/')
        {
            factorials[idx]=stoull(temp_num);
            temp_num.clear();
            idx++;
        }
        else
        {
            temp_num+=frac_total[i];
        }
    }
 
    unsigned long long int res_nom, res_denom;
 
    res_denom = get_LCM(factorials[1], factorials[3]);
    res_nom = factorials[0]*(res_denom/factorials[1])+factorials[2]*(res_denom/factorials[3]);
 
    unsigned long long int res_gdc = get_GCD(res_nom, res_denom);
    res_nom/=res_gdc;
    res_denom/=res_gdc;
 
    cout << frac_01 << " + " << frac_02 << " = " << res_nom << "/" << res_denom << endl;
 
    return 0;
}
