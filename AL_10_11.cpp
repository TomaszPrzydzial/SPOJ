#include <iostream>
#include <iomanip>
 
using namespace std;
 
struct st_time
{
    int hours;
    int minutes;
    int seconds;
 
};
 
st_time convert_string_to_time(string time_string)
{
    st_time new_time;
    new_time.hours=(time_string[0]-48)*10+time_string[1]-48;
    new_time.minutes=(time_string[3]-48)*10+time_string[4]-48;
    new_time.seconds=(time_string[6]-48)*10+time_string[7]-48;
    return new_time;
}
 
int calculate_seconds(st_time time)
{
    int seconds_sum;
 
    seconds_sum+=time.seconds+time.minutes*60+time.hours*3600;
 
    return seconds_sum;
}
 
st_time time_diffrence(st_time time1, st_time time2)
{
    st_time diffrence;
 
    if(time2.seconds>time1.seconds)
    {
        time1.minutes--;
        time1.seconds+=60;
    }
    diffrence.seconds = time1.seconds - time2.seconds;
 
    if(time2.minutes>time1.minutes)
    {
        time1.hours--;
        time1.minutes+=60;
    }
    diffrence.minutes = time1.minutes - time2.minutes;
    diffrence.hours = time1.hours - time2.hours;
 
    if(diffrence.hours<0) diffrence.hours=0;
    if(diffrence.minutes<0) diffrence.minutes=0;
    if(diffrence.seconds<0) diffrence.seconds=0;
 
    return diffrence;
}
 
void display_time(st_time &time_variable)
{
    cout << time_variable.hours << ":" << time_variable.minutes << ":" << time_variable.seconds << endl;
}
 
float speed_kilometers_per_hour(float meters, float seconds)
{
    return (meters/1000)/(seconds/3600);
}
 
const float nautical_mile = 1852.0;
 
int main()
{
    string start;
    string stop;
    float hull_length;
 
    while(cin >> start >> stop >> hull_length)
    {
        st_time start_time = convert_string_to_time(start);
        st_time stop_time = convert_string_to_time(stop);
 
        st_time diffrence_time = time_diffrence(stop_time, start_time);
 
        float speed_km_h=speed_kilometers_per_hour(hull_length, calculate_seconds(diffrence_time));
 
        cout << fixed << setprecision(1) << speed_km_h << " " << speed_km_h*1000/nautical_mile << endl;
    }
 
    return 0;
}
