#include <iostream>
 
using namespace std;
 
int main()
{
    int number;
    int biggest_number=0;
    int second_biggest_number=0;
 
    while(cin >> number)
    {
        if(number==0) break;
 
        if(number>biggest_number)
        {
            second_biggest_number=biggest_number;
            biggest_number=number;
        }
 
        if(number>second_biggest_number && number<biggest_number)
        {
            second_biggest_number=number;
        }
    }
 
    if(second_biggest_number==0) second_biggest_number=biggest_number;
 
    cout << second_biggest_number << endl;
 
    return 0;
}
