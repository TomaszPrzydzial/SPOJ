#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iomanip>
 
using namespace std;
 
float calculate_dist_bonus(int k_dist)
{
    if(k_dist>=60 && k_dist<=100) return 2;
    else if(k_dist>=100 && k_dist<=160) return 1.8;
    else return 1.2;
}
 
float calculate_dist_rate(float dist, float dist_bonus, int k_dist)
{
    return 60+(dist-(float)k_dist)*dist_bonus;
}
 
float calculate_judges_points(float judges_rates[5])
{
    sort(judges_rates, judges_rates+5);
    return judges_rates[1]+judges_rates[2]+judges_rates[3];
}
 
float calculate_wind_points(float skijumper_wind, float wind_bonus)
{
    return skijumper_wind*wind_bonus;
}
 
float calculate_beam_points(unsigned short int beam_position, unsigned short int start_beam_position, float beam_points)
{
    return (start_beam_position-beam_position)*beam_points;
}
 
bool CompareResult(pair <float, string> A, pair <float, string> B)
{
    if(A.first == B.first) return A.second < B.second;
    else return A.first > B.first;
}
 
int main()
{
    unsigned short int tests;
    cin >> tests;
 
    while(tests--)
    {
        vector <pair <float, string>> ranking;
 
        float wind_points, beam_points;
        unsigned short int k_point, beam_on_start, skijumpers;
        cin >> wind_points >> beam_points >> k_point >> beam_on_start >> skijumpers;
 
        //distance points
        float dist_bonus=calculate_dist_bonus(k_point);
 
        while(skijumpers--)
        {
            string name, surname;
            float distance, wind;
            unsigned short int beam_position;
            float judges_points[5];
 
            cin >> name >> surname >> distance >> wind >> beam_position;
            for(int i=0; i<5; i++) cin >> judges_points[i];
 
            float skijumper_points;
 
            skijumper_points=calculate_dist_rate(distance, dist_bonus, k_point);
            skijumper_points+=calculate_judges_points(judges_points);
            skijumper_points+=calculate_wind_points(wind, wind_points);
            skijumper_points+=calculate_beam_points(beam_position, beam_on_start, beam_points);
 
            bool match_points=false;
 
            ranking.push_back(make_pair(skijumper_points, name+" "+surname));
        }
 
        sort(ranking.begin(), ranking.end(), &CompareResult);
 
        for(int i=0; i<ranking.size(); i++)
        {
            cout << ranking[i].second << " " << fixed << setprecision(1) << ranking[i].first << endl;
        }
 
    }
 
    return 0;
}
