#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    int A_size;
    cin >> A_size;
 
    vector <int> set_A;
 
    while(A_size--)
    {
        int num;
        cin >> num;
        set_A.push_back(num);
    }
 
    int B_size;
    cin >> B_size;
 
    vector <int> set_sum = set_A;
    vector <int> set_prod;
 
    while(B_size--)
    {
        int num;
        cin >> num;
 
        bool num_in_set_A=false;
 
        for(int i=0; i<set_A.size(); i++)
        {
            if(set_A[i]==num) {num_in_set_A=true; break;}
        }
 
        if(num_in_set_A) set_prod.push_back(num);
        else set_sum.push_back(num);
    }
 
    sort(set_sum.begin(), set_sum.end());
    sort(set_prod.begin(), set_prod.end());
 
    for(int i=0; i<set_sum.size(); i++) cout << set_sum[i] << " ";
    cout << endl;
 
    if(set_prod.size()>0 ) for(int i=0; i<set_prod.size(); i++) cout << set_prod[i] << " ";
    else cout << "NULL";
    cout << endl;
 
    return 0;
}
