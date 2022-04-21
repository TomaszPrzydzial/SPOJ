#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
double promien;
double odleglosc;
double pole_kola;
const double pi=3.141592654;
 
int main()
{
 
    double promien_kola_sq;
 
    cout << setprecision(10);
 
    cin >> promien >> odleglosc;
 
    promien_kola_sq = pow(promien, 2)-pow(odleglosc/2, 2);
    pole_kola = promien_kola_sq*pi;
 
    cout << fixed << setprecision(2);
    cout << pole_kola << endl;
 
    return 0;
}
