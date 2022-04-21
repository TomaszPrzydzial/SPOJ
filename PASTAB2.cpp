#include <iostream>
 
using namespace std;
 
int length, number;
char math_operator;
 
int main()
{
    cin >> length;
 
    long int *table = new long int[length];
 
    for(int i=0; i<length; i++)
    {
        cin >> table[i];
    }
 
    cin >> math_operator >> number;
 
    for(int i=0; i<length; i++)
    {
        if(math_operator=='<' && table[i]<number) cout << table[i] << endl;
        if(math_operator=='>' && table[i]>number) cout << table[i] << endl;
    }
 
    delete [] table;
 
    return 0;
}
