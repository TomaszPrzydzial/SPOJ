#include <iostream>
#include <vector>
 
using namespace std;
 
bool is_prime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6) if(n%i == 0 || n%(i+2) == 0) return false;
 
    return true;
}
 
int main()
{
    bool prime_arr[10000000];
    bool* prime_ptr = &prime_arr[0];
 
    fill(prime_arr, prime_arr+10000000, true);
 
    for(int p=2; p*p<=10000000; p++)
    {
        if(*(prime_ptr+p)==true)
        {
            for(int i=p*2; i<=10000000; i+=p) *(prime_ptr+i)=false;
        }
    }
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int number;
        cin >> number;
 
        bool has_prime=false;
 
        if(number<=2) {cout << 2 << endl; has_prime=true;}
        if(number>=9999991) {cout << 9999991 << endl; has_prime=true;}
 
        int number_prim=number;
        int number_bis=number;
 
        if(number%2==0) {number_prim--; number_bis++;}
 
        while(!has_prime)
        {
            if(*(prime_ptr+number_prim)) {cout << number_prim << endl; break;}
            else if(*(prime_ptr+number_bis)) {cout << number_bis << endl; break;}
 
            number_prim-=2;
            number_bis+=2;
        }
    }
}
