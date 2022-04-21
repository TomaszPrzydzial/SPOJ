#include <iostream>
 
using namespace std;
 
bool year_table[365];
int months_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
void calculate_months()
{
    for(int i=1; i<13; i++) months_days[i]=months_days[i]+months_days[i-1];
    return;
}
 
void clear_year_table()
{
    for(int i=0; i<365; i++) year_table[i]=true;
    return;
}
 
void show_year_table()
{
    for(int i=0; i<365; i++) if(year_table[i]) cout << "Dzien " << i+1 << endl;
 
    return;
}
 
int parse_to_daystamp(string date)
{
    int day=10*(date[0]-48)+(date[1]-48);
    int month=10*(date[3]-48)+(date[4]-48)-1;
 
    return months_days[month]+day;
}
 
string parse_to_date(int daystamp)
{
    string date;
    int day, month;
 
    for(int i=0; i<13; i++)
    {
        if(daystamp-months_days[i]<=0)
        {month=i; day=daystamp-months_days[month-1]; break;}
    }
 
    if(day<10) date='0'+to_string(day)+'.';
    else date=to_string(day)+'.';
 
    if(month<10) date+='0'+to_string(month);
    else date+=to_string(month);
 
    return date;
}
 
int main()
{
    calculate_months();
    clear_year_table();
 
    int persons;
    cin >> persons;
 
    while(persons--)
    {
        string start_day, end_day;
        cin >> start_day >> end_day;
 
        int start_daystamp, end_daystamp;
 
        start_daystamp=parse_to_daystamp(start_day);
        end_daystamp=parse_to_daystamp(end_day);
 
        for(int i=0; i<start_daystamp-1; i++) year_table[i]=false;
        for(int i=end_daystamp; i<365; i++) year_table[i]=false;
 
        //show_year_table();
    }
 
    int day_counter=0;
    int fractal_day;
 
    for(int i=0; i<365; i++) if(year_table[i]) {fractal_day=i+1; day_counter++;}
 
    if(day_counter==1) cout << parse_to_date(fractal_day)+".2019";
    else cout << "Jak Marcin zgubi buty do biegania";
    cout << endl;
 
    return 0;
}
