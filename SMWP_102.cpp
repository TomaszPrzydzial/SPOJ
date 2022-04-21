#include <iostream>
 
using namespace std;
 
bool prime_arr[1000001];
bool* prime_ptr = &prime_arr[0];
 
void generate_primes_arr()
{
    fill(prime_arr, prime_arr+1000001, true);
    *(prime_ptr)=false;
    *(prime_ptr+1)=false;
 
    for(int p=2; p*p<=1000001; p++)
    {
        if(*(prime_ptr+p)==true)
        {
            for(int i=p*2; i<=1000001; i+=p) *(prime_ptr+i)=false;
        }
    }
 
    return;
}
 
int main()
{
    generate_primes_arr();
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string number_str;
        cin >> number_str;
 
        bool num_is_super_prime=true;
        int number_to_check;
        int letters=number_str.length();
 
        while(letters>0)
        {
            number_str=number_str.substr(0,letters);
            number_to_check=stoi(number_str);
 
            if(*(prime_ptr+number_to_check)==false) {num_is_super_prime=false; break;}
 
            letters--;
        }
 
        if(num_is_super_prime) cout << "TAK";
        else cout << "NIE";
        cout << endl;
    }
 
    return 0;
}
