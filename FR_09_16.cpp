#include <iostream>
 
using namespace std;
 
unsigned long long int mugs[5];
unsigned long long int weight_sum;
unsigned short int choice;
 
int main()
{
    cin >> mugs[0] >> mugs[1] >> mugs[2] >> mugs[3] >> mugs[4];
 
    for(int i=0; i<5; i++)
    {
        weight_sum+=mugs[i];
    }
 
    for(int i=0; i<5; i++)
    {
        if((weight_sum-mugs[i])%3==0)
        {
           choice = i+1;
           break;
        }
    }
 
    cout << choice << endl;
 
    return 0;
}
