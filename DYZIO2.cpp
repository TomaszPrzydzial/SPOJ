#include <iostream>
#include <vector>
 
using namespace std;
 
bool is_prime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6) if (n%i == 0 || n%(i+2) == 0) return false;\
 
    return true;
}
 
int main()
{
    unsigned short int prime_numbers[1000001];
    unsigned short int* prime_arr_pointer = &prime_numbers[0];
 
    unsigned short int counter=0;
    for(int i=2; i<1000001; i++)
    {
        if(is_prime(i)) counter++;
 
        *(prime_arr_pointer+i)=counter;
        if(i==821603) counter=0;
    }
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int a,b;
        cin >> a >> b;
 
        int range_start = *(prime_arr_pointer+a-1);
        int range_end = *(prime_arr_pointer+b);
 
        if(a-1>821603) range_start+=65535;
        if(b>821603) range_end+=65535;
 
        cout << range_end-range_start << endl;
    }
}
