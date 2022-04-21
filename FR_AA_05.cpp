#include <iostream>
#include <math.h>
 
using namespace std;
 
class Windscreen
{
public:
    int size_x;
    int size_y;
    int wiper_length;
 
    Windscreen(int size_y, int wiper_length)
    {
        this->size_y = size_y;
        this->size_x = 2*size_y;
        this->wiper_length = wiper_length;
    }
 
    bool IsInRange(int pos_x, int pos_y)
    {
        float dist_x, dist_y, dist;
 
        dist_x = abs(size_y - pos_x);
        dist_y = pos_y;
 
        dist = sqrt(pow(dist_x, 2)+pow(dist_y, 2));
 
        if(dist<=wiper_length) return true;
        else return false;
    }
};
 
int main()
{
    int a, r, insects;
    cin >> a >> r >> insects;
 
    Windscreen windscreen(a, r);
 
    int insects_on_windscreen = 0;
 
    while(insects--)
    {
        int x, y;
        cin >> x >> y;
 
        if(!windscreen.IsInRange(x, y)) insects_on_windscreen++;
    }
 
    cout << insects_on_windscreen << endl;
 
    return 0;
}
