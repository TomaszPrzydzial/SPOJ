#include <iostream>
 
using namespace std;
 
 
int games;
int coins_A, coins_B;
 
 
int main()
{
    cin >> games;
 
    while(games--)
    {
        cin >> coins_A >> coins_B;
 
        while(coins_A!=coins_B)
        {
            if(max(coins_A, coins_B)%min(coins_A, coins_B)==0)
            {
                 int temp = min(coins_A, coins_B);
                 coins_A = temp;
                 coins_B = temp;
                 break;
            }
 
 
            if(coins_A<coins_B) coins_B-=coins_A;
            else coins_A-=coins_B;
        }
 
        cout << coins_A+coins_B << endl;
    }
 
    return 0;
}
