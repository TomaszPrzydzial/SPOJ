#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        int n;
 
        cin >> n;
 
        int num_reg[2]={0, 0};
        int diff, result, result_record;
 
        if(n==1) {result_record=result=1; cin >> num_reg[0]; goto quit;}
 
        result_record=2;
        result=2;
 
        for(int i=0; i<2; i++) cin >> num_reg[i];
 
        diff = num_reg[1]-num_reg[0];
 
        for(int i=2; i<n; i++)
        {
            cin >> num_reg[i%2];
 
            if(num_reg[i%2]-(num_reg[(i-1)%2])==diff) result++;
            else
            {
                diff=num_reg[i%2]-(num_reg[(i-1)%2]);
                if(result>result_record) result_record=result;
                result=2;
            }
        }
 
        quit:
        cout << max(result, result_record) << endl;
    }
 
    return 0;
}
