#include <iostream>
#include <vector>
 
using namespace std;
 
int prime_numbers[5] = {127, 131, 137, 139, 149};
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int letters;
        cin >> letters;
 
        int* letters_arr = new int[letters];
 
        vector <int> possible_codes;
 
        for(int i=0; i<letters; i++) cin >> letters_arr[i];
 
        for(int k=0; k<5; k++)
        {
            bool k_is_possible=true;
 
            for(int j=0; j<letters; j++)
            {
                int result;
                result = letters_arr[j]%prime_numbers[k];
 
                if(result<65 || result>90) {k_is_possible=false; break;}
            }
 
            if(k_is_possible) possible_codes.push_back(prime_numbers[k]);
        }
 
        if(possible_codes.size()==1)
        {
            cout << possible_codes[0] << " ";
            for(int i=0; i<letters; i++) cout << (char)(letters_arr[i]%possible_codes[0]);
        }
        else cout << "NIECZYTELNE";
        cout << endl;
    }
 
    return 0;
}
