#include <iostream>
 
using namespace std;
 
const string DAYS[7] = {"poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela"};
const string MONTHS_NAMES[12] = {"styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien"};
const int MONTHS_DAYS[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
 
struct Day_info
{
    int day_num;
    int month_num;
    string week_day;
    bool is_free;
};
 
class Calendar
{
public:
 
    Day_info days[365];
    int first_day;
 
    Calendar(string first_day)
    {
        for(int i=0; i<7; i++)
        {
            if(first_day==DAYS[i])
            {
                this->first_day = i;
                break;
            }
        }
 
        CalculateCalendar();
    }
 
    void CalculateCalendar()
    {
        int month=0;
        int day_num=1;
        int week_day=first_day;
 
        for(int i=0; i<365; i++)
        {
            if(i+1>MONTHS_DAYS[month])
            {
                month++;
                day_num=1;
            }
 
            Day_info day;
            day.day_num=day_num;
            day.month_num=month+1;
            day.week_day=DAYS[week_day];
 
            if(week_day==5 || week_day==6) day.is_free=true;
            else day.is_free=false;
 
            days[i]=day;
 
            week_day++;
            week_day%=7;
 
            day_num++;
        }
    }
 
    int LongestHoliday(int how_many_days)
    {
        int longest_holiday=0;
        int holiday=0;
        int spare_days=how_many_days;
 
        for(int i=0; i<365; i++)
        {
            spare_days=how_many_days;
            int it=0;
 
            while(days[i+it].is_free || spare_days>0)
            {
                holiday++;
 
                if(!days[i+it].is_free) spare_days--;
 
                it++;
 
                if(i+it>=365) break;
            }
 
            if(longest_holiday<holiday) longest_holiday=holiday;
            holiday=0;
        }
 
        return longest_holiday;
    }
 
    void PrintCalendar()
    {
        for(int i=0; i<365; i++)
        {
            cout << i+1 << ". " << days[i].day_num << " " << MONTHS_NAMES[days[i].month_num-1] << " (" << days[i].week_day << ")   ";
            if(days[i].is_free) cout << "WOLNE";
            cout << endl;
        }
    }
};
 
int main()
{
    int free_days;
    string first_day;
    cin >> free_days >> first_day;
 
    Calendar calendar(first_day);
 
    int m;
    cin >> m;
 
    while(m--)
    {
        string month;
        cin >> month;
 
        int month_number;
 
        for(int i=0; i<12; i++)
        {
            if(month==MONTHS_NAMES[i])
            {
                month_number=i;
                break;
            }
        }
 
        int l;
        cin >> l;
 
        while(l--)
        {
            int k;
            cin >> k;
 
            calendar.days[MONTHS_DAYS[month_number-1]+k-1].is_free=true;
        }
    }
 
    //calendar.PrintCalendar();
 
    cout << calendar.LongestHoliday(free_days) << endl;
 
    return 0;
}
