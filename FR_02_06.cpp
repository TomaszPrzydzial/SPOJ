#include <iostream>
#include <string.h>
 
using namespace std;
 
int tests;
 
float bmi (int mass, float height)
{
    height = height/100;
    float bmi_factor = (float)(mass/(height*height));
    return bmi_factor;
}
 
 
int main()
{
 
    cin >> tests;
 
    string *names = new string[tests];
    int *mass = new int[tests];
    int *height = new int[tests];
 
    for(int i=0; i<tests; i++)
    {
        cin >> names[i] >> mass[i] >> height [i];
    }
 
    cout << "niedowaga" << endl;
    for(int i=0; i<tests; i++)
    {
        if((bmi(mass[i], (float)(height[i])))<18.5) cout << names[i] << endl;
    }
    cout << endl;
 
    cout << "wartosc prawidlowa" << endl;
    for(int i=0; i<tests; i++)
    {
        if((bmi(mass[i], (float)(height[i])))>=18.5 && bmi(mass[i], (float)(height[i]))<25) cout << names[i] << endl;
    }
    cout << endl;
 
    cout << "nadwaga" << endl;
    for(int i=0; i<tests; i++)
    {
        if((bmi(mass[i], (float)(height[i])))>=25) cout << names[i] << endl;
    }
 
    return 0;
}
