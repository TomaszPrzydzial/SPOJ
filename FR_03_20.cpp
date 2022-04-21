#include <iostream>
 
using namespace std;
 
int main()
{
    int a_min[8]={65,68,71,74,77,80,84,87};
    int a_max[8]={67,70,73,76,79,83,86,90};
 
    int t;
    string word, num;
 
    cin >> t;
 
    while(t--)
    {
        cin >> word >> num;
 
        bool cw;
 
        cw=true;
 
        for(int i=0; i<word.length(); i++)
        {
            if(cw==false) break;
 
            int L_code=(int)word[i];
            if(L_code>90) L_code-=32;
            int B_code=(int)num[i]-50;
 
            if(B_code>=0 && B_code<=7)
            {
                if((L_code>=a_min[B_code] && L_code<=a_max[B_code]) || B_code+2==L_code-48);
                else cw=false;
            }
            else if(B_code==-2 || B_code==-1)
            {
                if(L_code-48==B_code+2);
                else cw=false;
            }
            else cw=false;
 
        }
 
        if(cw==true) cout << "TAK" << " - " << word << endl;
        else cout << "NIE" << endl;
 
        cout << endl;
    }
 
    return 0;
}
