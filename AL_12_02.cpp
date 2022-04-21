#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        unsigned int r;
        cin >> r;
 
        unsigned long long int lattice_points=1+4*r;
 
        double lattice_sum=0;
 
        for(unsigned int i=1; i<r; i++) lattice_sum+=floor(sqrt(r*r-i*i));
 
        lattice_points+=4*lattice_sum;
 
        cout << lattice_points << endl;
    }
 
    return 0;
}
