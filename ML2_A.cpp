#include <iostream>
 
using namespace std;
 
int PRIMES[78] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397};
 
int main()
{
    int d;
    cin >> d;
 
    while(d--)
    {
        int number;
        cin >> number;
 
        bool isPossible = false;
 
        int sum = 0;
        int first, second;
 
        for(int i=0; i<78; i++)
        {
            if(isPossible || PRIMES[i]>=number) break;
 
            for(int k=0; k<78; k++)
            {
                if(isPossible|| PRIMES[k]>=number) break;
 
                if(PRIMES[i]+PRIMES[k]==number)
                {
                    first=PRIMES[i];
                    second=PRIMES[k];
                    isPossible=true;
                }
            }
        }
 
        if(isPossible) cout << "TAK " << first << " " << second << endl;
        else cout << "NIE" << endl;
    }
 
    return 0;
}
