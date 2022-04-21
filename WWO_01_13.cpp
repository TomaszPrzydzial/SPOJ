#include <iostream>
 
using namespace std;
 
int convert_to_min(string time_string)
{
    int minutes;
 
    minutes=(time_string[0]-48)*600;
    minutes+=(time_string[1]-48)*60;
    minutes+=(time_string[3]-48)*10;
    minutes+=(time_string[4]-48);
 
    return minutes;
}
 
int main()
{
    string sunrise, sunset, actual;
    cin >> sunrise >> sunset >> actual;
 
    int actual_time = convert_to_min(actual);
 
    if(actual_time>=convert_to_min(sunrise) && actual_time<convert_to_min(sunset)) cout << "dzien";
    else cout << "noc";
    cout << endl;
 
    return 0;
}
