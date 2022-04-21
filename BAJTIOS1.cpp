#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int days;
    short int measure_points;
    float avrg_pollution;
 
    cin >> days >> measure_points >> avrg_pollution;
 
    int* avrg_measure_tab = new int[days];
    int days_exceeded=0;
 
    for(int i=0; i<days; i++)
    {
        string measure;
        cin >> measure;
 
        char* char_pointer = &measure[0];
 
        float day_avrg=0;
 
        for(int k=0; k<measure_points; k++) day_avrg+=*(char_pointer+k)-48;
 
        if(day_avrg/measure_points>avrg_pollution) days_exceeded++;
 
        *(avrg_measure_tab+i)=days_exceeded;
    }
 
    int queries;
    cin >> queries;
 
    while(queries--)
    {
        int a, b, result;
        cin >> a >> b;
 
        result=*(avrg_measure_tab+b-1)-*(avrg_measure_tab+a-2);
 
        cout << result << endl;
    }
 
    return 0;
}
