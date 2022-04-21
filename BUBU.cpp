#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tests;
    cin >> tests;
 
    int alphabet_arr[26];
 
    while(tests--)
    {
        fill(alphabet_arr, alphabet_arr+26, 0);
 
        string word;
        cin >> word;
 
        vector <int> nominator, denominator;
 
        for(int i=0; i<word.length(); i++) alphabet_arr[word[i]-97]++;
        for(int i=2; i<=word.length(); i++)
        {
            int number = i;
            int pn=2;
 
            while(number>1)
            {
                while(number%pn==0)
                {
                    number/=pn;
                    nominator.push_back(pn);
                }
                pn++;
            }
        }
        for(int i=0; i<26; i++)
        {
            for(int k=2; k<=alphabet_arr[i]; k++)
            {
                int number = k;
                int pn=2;
 
                while(number>1)
                {
                    while(number%pn==0)
                    {
                        number/=pn;
                        denominator.push_back(pn);
                    }
                    pn++;
                }
            }
        }
 
        while(denominator.size()!=0)
        {
            for(int i=0; i<nominator.size(); i++)
            {
                for(int k=0; k<denominator.size(); k++)
                {
                    if(nominator[i]%denominator[k]==0)
                    {
                        nominator[i]/=denominator[k];
                        denominator.erase(denominator.begin()+k);
                        break;
                    }
                }
            }
        }
 
        unsigned long long int result=1;
        for(int i=0; i<nominator.size(); i++) result*=nominator[i];
 
        cout << result << endl;
    }
 
    return 0;
}
