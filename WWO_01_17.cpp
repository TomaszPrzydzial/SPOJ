#include <iostream>
 
using namespace std;
 
pair<int, int> parse_time(string time)
{
    int hours;
    int minutes;
 
    hours=(time[0]-48)*10+(time[1]-48);
    minutes=(time[3]-48)*10+(time[4]-48);;
 
    return make_pair(hours, minutes);
}
 
string make_time_string(pair<int, int> time)
{
    string s_hours=to_string(time.first);
    string s_minutes=to_string(time.second);
 
    if(time.first<10) s_hours="0"+s_hours;
    if(time.second<10) s_minutes="0"+s_minutes;
 
    return s_hours+":"+s_minutes;
}
 
bool check_time_modulo(pair<int, int> time)
{
    if(time.first==0 || time.second%time.first!=0) return false;
    else return true;
}
 
pair<int, int> add_minute(pair<int, int> time)
{
    int hours=time.first;
    int minutes=time.second;
 
    minutes++;
 
    if(minutes>59)
    {
        minutes=0;
        hours++;
    }
 
    if(hours>23) hours=0;
 
    return make_pair(hours, minutes);
}
 
int main()
{
    int d;
    cin >> d;
 
    while(d--)
    {
        string time;
        cin >> time;
 
        pair<int, int> parsed_time = parse_time(time);
        parsed_time = add_minute(parsed_time);
 
        while(!check_time_modulo(parsed_time))
        {
            parsed_time = add_minute(parsed_time);
        }
 
        cout << make_time_string(parsed_time) << endl;
    }
 
    return 0;
}
