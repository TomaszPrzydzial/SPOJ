#include <iostream>
#include <string.h>
#include <vector>
 
using namespace std;
 
string start_time;
pair <int, int> actual_time;
 
pair <int, int> parse_time_to_pair(string time_string)
{
    pair <int, int> time_int;
 
    time_int.first = (time_string[0]-48)*10 + (time_string[1]-48);
    time_int.second = (time_string[3]-48)*10 + (time_string[4]-48);
 
    return time_int;
}
 
string parse_time_to_string(int hours, int minutes)
{
    string time_string;
    time_string.clear();
 
    if(hours<10) time_string+='0';
    time_string+=to_string(hours)+':';
 
    if(minutes<10) time_string+='0';
    time_string+=to_string(minutes);
 
    return time_string;
}
 
void add_time(int minutes)
{
    int hours_to_add, minutes_to_add;
 
    hours_to_add=minutes/60;
    minutes_to_add=minutes%60;
 
    actual_time.second+=minutes_to_add;
    if(actual_time.second>=60) {actual_time.second%=60; actual_time.first+=1;}
 
    actual_time.first+=hours_to_add;
    if(actual_time.first>=24) actual_time.first%=24;
 
    cout << "," << parse_time_to_string(actual_time.first, actual_time.second);
 
    return;
}
 
int main()
{
    cin >> start_time;
 
    actual_time=parse_time_to_pair(start_time);
 
    vector <int> vec_rec;
    int recess;
 
    while(cin >> recess)
    {
        vec_rec.push_back(recess);
    }
 
    cout << start_time;
    add_time(45);
 
    for(int i=0; i<vec_rec.size(); i++)
    {
        add_time(vec_rec[i]);
        add_time(45);
    }
 
    return 0;
}
