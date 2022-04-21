#include <iostream>
#include <vector>
 
using namespace std;
 
class Runner
{
    public:
    string name;
    string surname;
    string time;
    int seconds;
 
    Runner(string n, string s, string t)
    {
        name=n;
        surname=s;
        time=t;
 
        calculateTime();
    }
 
    void calculateTime()
    {
        seconds=atoi(time.substr(0, time.find(":")).c_str()) * 60;
        seconds+=atoi(time.substr(time.find(":")+1).c_str());
    }
 
};
 
int main()
{
    unsigned int runners;
    vector <Runner> vRunners;
 
    cin >> runners;
 
    while(runners--)
    {
        string r_name, r_surname, r_time;
        cin >> r_name >> r_surname >> r_time;
 
        Runner temp_runner = Runner(r_name, r_surname, r_time);
 
        if(vRunners.size()==0) vRunners.push_back(temp_runner);
        else
        {
            if(vRunners[0].seconds>temp_runner.seconds) {vRunners.clear(); vRunners.push_back(temp_runner);}
            else if(vRunners[0].seconds==temp_runner.seconds) vRunners.push_back(temp_runner);
        }
    }
 
 
    for(int i=0; i<vRunners.size(); i++)
    {
        cout << vRunners[i].name << " " << vRunners[i].surname << endl;
    }
 
    return 0;
}
