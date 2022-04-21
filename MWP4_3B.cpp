#include <iostream>
 
using namespace std;
 
int calculate_seconds(string time_str)
{
    int seconds=0;
 
    seconds+=(time_str[0]-'0')*36000;
    seconds+=(time_str[1]-'0')*3600;
 
    seconds+=(time_str[3]-'0')*600;
    seconds+=(time_str[4]-'0')*60;
 
    seconds+=(time_str[6]-'0')*10;
    seconds+=(time_str[7]-'0');
 
    return seconds;
}
 
string time_from_seconds(int time_in_seconds)
{
    string time_str;
 
    int hours = time_in_seconds/3600;
    time_in_seconds%=3600;
 
    int minutes = time_in_seconds/60;
    time_in_seconds%=60;
 
    int seconds = time_in_seconds;
 
    if(hours<10) time_str+="0";
    time_str+=to_string(hours)+":";
    if(minutes<10) time_str+="0";
    time_str+=to_string(minutes)+":";
    if(seconds<10) time_str+="0";
    time_str+=to_string(seconds);
 
    return time_str;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int app;
        string sleep_time;
        cin >> app >> sleep_time;
 
        int longest_sleep = 0;
        int sleep_time_in_sec = calculate_seconds(sleep_time);
        int prev_time_in_sec=32400;
 
        while(app--)
        {
            string app_time, app_status;
            cin >> app_time >> app_status;
 
            int app_time_in_sec = calculate_seconds(app_time);
 
            if(app_status=="AC")
            {
                if(app_time_in_sec-prev_time_in_sec>=sleep_time_in_sec)
                {
                    int sneeze_time = app_time_in_sec-prev_time_in_sec-sleep_time_in_sec;
                    if(sneeze_time>longest_sleep) longest_sleep=sneeze_time;
                }
 
                prev_time_in_sec=app_time_in_sec;
            }
        }
 
        if(50400-prev_time_in_sec>=sleep_time_in_sec)
        {
            int sneeze_time = 50400-prev_time_in_sec-sleep_time_in_sec;
            if(sneeze_time>longest_sleep) longest_sleep=sneeze_time;
        }
 
 
        if(longest_sleep==0) cout << 0 << endl;
        else cout << time_from_seconds(longest_sleep) << endl;
    }
 
    return 0;
}
