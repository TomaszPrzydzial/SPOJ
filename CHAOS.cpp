#include <iostream>
#include <string.h>
 
using namespace std;
 
string trim_hour(string h);
string time_string(pair <int, int> actual_time);
string format_time(pair <int, int> actual_time);
pair <int, int> get_time(string h);
pair <int, int> add_minute(pair <int, int> actual_time);
bool is_palindrome(string word);
 
int main()
{
    unsigned int tries;
 
    cin >> tries;
 
    while(tries--)
    {
        string hour;
 
        cin >> hour;
 
        pair <int, int> actual_hour = get_time(hour);
 
        while(true)
        {
            actual_hour = add_minute(actual_hour);
            if(is_palindrome(time_string(actual_hour))==true) break;
        }
 
        cout << format_time(actual_hour) << endl;
 
    }
 
    return 0;
}
 
string trim_hour(string h)
{
    string hour_trimmed;
    bool not_zero=false;
 
    for(int i=0; i<h.length(); i++)
    {
        if(h[i]!=58 && ((h[i]==48 && not_zero==true) || (h[i]!=48)))
        {
            not_zero=true;
            hour_trimmed+=h[i];
        }
    }
 
    return hour_trimmed;
}
 
string time_string(pair <int, int> actual_time)
{
    string t_string;
    int hour = actual_time.first;
    int minutes = actual_time.second;
 
    if(hour>0)
    {
        t_string += to_string(hour);
        if(minutes<10) t_string += "0"+to_string(minutes);
        else t_string += to_string(minutes);
    }
    else t_string += to_string(minutes);
 
 
    return t_string;
}
 
string format_time(pair <int, int> actual_time)
{
    string t_formatted;
    int hours = actual_time.first;
    int minutes = actual_time.second;
 
    if(hours==0) t_formatted+="00";
    else if(hours<10) t_formatted+="0"+to_string(hours);
    else t_formatted+=to_string(hours);
 
    t_formatted+=":";
 
    if(minutes<10) t_formatted+="0"+to_string(minutes);
    else t_formatted+=to_string(minutes);
 
    return t_formatted;
}
 
pair <int, int> get_time(string h)
{
    int hours, minutes;
 
    hours = (h[0]-48)*10+(h[1]-48);
    minutes = (h[3]-48)*10+(h[4]-48);
 
    return {hours, minutes};
}
 
pair <int, int> add_minute(pair <int, int> actual_time)
{
    int hours = actual_time.first;
    int minutes = actual_time.second;
 
    minutes++;
 
    if(minutes==60)
    {
        minutes=0;
        hours++;
    }
 
    if(hours==24)
    {
        hours=0;
    }
 
    return {hours, minutes};
}
 
bool is_palindrome(string word)
{
    bool is_pal=true;
    int n = word.length()-1;
 
    for(int i=0; i<word.length()/2; i++)
    {
        if(word[i]!=word[n-i])
        {
            is_pal=false;
            break;
        }
    }
 
    return is_pal;
}
