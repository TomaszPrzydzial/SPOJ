#include <iostream>
#include <iomanip>
 
using namespace std;
 
int get_hours(string time_str)
{
    for(int i=0; i<time_str.length(); i++) {if(time_str[i]==':'){time_str=time_str.substr(0, i); break;}}
    return stoi(time_str);
}
 
int get_minutes(string time_str)
{
    for(int i=time_str.length()-1; i>=0; i--) {if(time_str[i]==':'){time_str=time_str.substr(i+1, time_str.length()-i); break;}}
    return stoi(time_str);
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string time;
        cin >> time;
 
        int hours = get_hours(time);
        int minutes = get_minutes(time);
 
        if(hours>12) hours-=12;
 
        float m_angle=minutes*6;
        float h_angle=hours*30+float(minutes*0.5);
 
        float hands_angle = max(h_angle, m_angle)-min(h_angle, m_angle);
 
        if(hands_angle>180.0) hands_angle=360.0-hands_angle;
 
        cout << fixed << setprecision(1) << hands_angle << endl;
    }
 
    return 0;
}
