#include <iostream>
 
using namespace std;
 
float ax, ay, bx, by, cx, cy, dx, dy;
 
int main()
{
    while(cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy)
    {
        int pole_AB, pole_CD, pole_X;
 
        pole_AB=(bx-ax)*(by-ay);
        pole_CD=(dx-cx)*(dy-cy);
 
        int X_side_A, X_side_B;
 
        if(bx<=cx || dx<=ax) X_side_A=0; //brak wspolnego pola
        else
        {
            if(cx>=ax && dx<=bx) X_side_A=(dx-cx); //pole wpisane w srodek
            else if(cx<=ax && dx>=bx) X_side_A=(bx-ax); //pole w calosci
            else if(cx<=ax) X_side_A=(dx-ax);
            else  X_side_A=(bx-cx);
        }
 
        if(by<=cy || dy<=ay) X_side_B=0; //brak wspolnego pola
        else
        {
            if(cy>=ay && dy<=by) X_side_B=(dy-cy); //pole wpisane w srodek
            else if(cy<=ay && dy>=by) X_side_B=(by-ay); //pole w calosci
            else if(cy<=ay) X_side_B=(dy-ay);
            else  X_side_B=(by-cy);
        }
 
        pole_X = X_side_A*X_side_B;
 
        cout << pole_AB+pole_CD-pole_X << endl;
 
    }
 
    return 0;
}
