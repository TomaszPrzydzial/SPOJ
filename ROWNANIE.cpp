#include <iostream>
#include <math.h>
 
using namespace std;
 
int ile_testow;
float A, B, C;
 
int main()
{
    while(cin >> A >> B >> C)
    {
      float delta;
      float liczba_pierwiastkow;
 
      liczba_pierwiastkow=0;
 
      delta = (B*B) - (4*A*C);
 
      if(delta>0)
      {
          liczba_pierwiastkow=2;
      }
      else if(delta==0) liczba_pierwiastkow=1;
 
      cout << liczba_pierwiastkow << endl;
 
    }
 
 
    return 0;
}
