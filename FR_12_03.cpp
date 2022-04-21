#include <iostream>
#include <string>
 
using namespace std;
 
string DAYS[] = {"poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela"};
 
struct TIMESTAMP
{
    int hours;
    int minutes;
    int seconds;
    int day_index;
};
 
TIMESTAMP get_timestamp(string s_time, string s_day)
{
    TIMESTAMP new_timestamp;
 
    new_timestamp.hours=(s_time[0]-48)*10+(s_time[1]-48);
    new_timestamp.minutes=(s_time[3]-48)*10+(s_time[4]-48);
    new_timestamp.seconds=(s_time[6]-48)*10+(s_time[7]-48);
 
    for(int i=0; i<7; i++)
    {
        if(s_day==DAYS[i])
        {
            new_timestamp.day_index=i;
            break;
        }
    }
 
    return new_timestamp;
}
 
TIMESTAMP add_seconds(TIMESTAMP actual_time, unsigned long long int sec)
{
    int days = sec/86400;
    sec -= (days*86400);
    int hours = sec/3600;
    sec -= (hours*3600);
    int minutes = sec/60;
    sec -= (minutes*60);
 
    actual_time.seconds += sec;
    if(actual_time.seconds>59)
    {
        actual_time.seconds%=60;
        actual_time.minutes++;
    }
 
    actual_time.minutes += minutes;
    if(actual_time.minutes>59)
    {
        actual_time.minutes%=60;
        actual_time.hours++;
    }
 
    actual_time.hours += hours;
    if(actual_time.hours>23)
    {
        actual_time.hours%=24;
        actual_time.day_index++;
    }
 
    actual_time.day_index += days;
    actual_time.day_index %= 7;
 
    return actual_time;
}
 
string get_time_string(TIMESTAMP actual_timestamp)
{
    string hours = to_string(actual_timestamp.hours);
    string minutes = to_string(actual_timestamp.minutes);
    string seconds = to_string(actual_timestamp.seconds);
 
    if(actual_timestamp.hours<10) hours = "0" + hours;
    if(actual_timestamp.minutes<10) minutes = "0" + minutes;
    if(actual_timestamp.seconds<10) seconds = "0" + seconds;
 
    return hours+":"+minutes+":"+seconds+" "+DAYS[actual_timestamp.day_index];
}
 
int main()
{
    string s_time;
    string s_day;
    string s_seconds;
 
    cin >> s_time >> s_day >> s_seconds;
 
    s_seconds.pop_back();
    unsigned long long int sec = stoull(s_seconds);
    TIMESTAMP actual_time = get_timestamp(s_time, s_day);
 
    unsigned long long int weeks = sec/604800;
    sec -= (weeks*604800);
 
    if(weeks!=0 && sec>0) cout << "NIE" << endl;
    else cout << "TAK" << endl;
 
    actual_time = add_seconds(actual_time, sec);
    cout << get_time_string(actual_time) << endl;
 
 
    return 0;
}
