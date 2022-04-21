#include <iostream>
 
using namespace std;
 
const string NFD = "niepoprawny format daty";
 
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string month_string[12] = {"stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca", "sierpnia", "wrzesnia", "pazdziernika", "listopada", "grudnia"};
 
bool is_leap_year(int year)
{
    if(year%400==0 || year%4==0 && year%100!=0) return true;
    else return false;
}
 
string date_to_string(string date)
{
    if(date.length()!=8) return NFD;
 
    int year=1000*(date[4]-'0')+100*(date[5]-'0')+10*(date[6]-'0')+(date[7]-'0');
    int month=10*(date[2]-'0')+(date[3]-'0');
    int day=10*(date[0]-'0')+(date[1]-'0');
 
    //leap year day plus
    if(is_leap_year(year)) months[1]=29;
    else months[1]=28;
 
    //year validation
    if(year<1000 || year>2200) return NFD;
    //month validation
    if(month<1 || month>12) return NFD;
    //day validation
    if(day<1 || day>months[month-1]) return NFD;
 
    return to_string(day)+" "+month_string[month-1]+" "+to_string(year);
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string date_string;
        cin >> date_string;
 
        cout << date_to_string(date_string) << endl;
 
    }
 
    return 0;
}
