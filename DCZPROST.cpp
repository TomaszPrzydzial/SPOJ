#include <iostream>
 
using namespace std;
 
long long int calculate_square(long long int square_size, bool odd)
{
    long long int result=0;
 
    for(int i=1; i<=square_size; i++)
    {
        if(i%2==0 && !odd) result+=2*i-1;
        if(i%2!=0 && odd) result+=2*i-1;
    }
 
    return result;
}
 
long long int calculate_rectangle(long long int size_x, long long int size_y, bool odd)
{
    long long int result=0;
 
    if(size_x%2==0) result=size_y*(size_x/2);
    else
    {
        if(!odd) result=size_y*((size_x-1)/2);
        else result=size_y*((size_x+1)/2);
    }
 
    if(result<0) result=0;
 
    return result;
}
 
int main()
{
    int x0, y0, x1, y1;
 
    cin >> x0 >> y0 >> x1 >> y1;
 
    long long int squares=0;
 
    //calculate corner square
    long long int sq_start, sq_end;
 
    if(y0>x0) sq_start = y0;
    else sq_start = x0;
 
    if(y1<x1) sq_end = y1;
    else sq_end = x1;
 
    //calculate red squares in corner square
 
    squares+=calculate_square(sq_end-sq_start, sq_start%2);
 
    if(sq_start>sq_end) swap(sq_start, sq_end);
 
    int rect_x, rect_y;
 
    //Check left rectangle
    if(x0<sq_start)
    {
        rect_x = sq_start - x0;
        rect_y = y1-y0;
 
        squares+=calculate_rectangle(rect_y, rect_x, y0%2);
    }
 
    //Check right rectangle
    if(x1>sq_end)
    {
        rect_x = x1 - sq_end;
        rect_y = y1-y0;
 
        squares+=calculate_rectangle(rect_x, rect_y, sq_end%2);
    }
 
    //Check upper rectangle
    if(y1>sq_end)
    {
        rect_x = x1 - sq_start;
        rect_y = y1 - sq_end;
 
        squares+=calculate_rectangle(rect_y, rect_x, sq_end%2);
    }
 
    //Check lower rectangle
    if(y0<sq_start)
    {
        rect_x = sq_end - x0;
        rect_y = sq_start - y0;
 
        squares+=calculate_rectangle(rect_x, rect_y, x0%2);
    }
 
    //Show result
    cout << squares << endl;
 
    return 0;
}
