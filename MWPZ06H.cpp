#include <iostream>
#include <list>
 
using namespace std;
 
int tests, participants;
list <int> results;
list <int> ranking;
int top_rate = 0;
int bottom_rate = 0;
 
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        cin >> participants;
 
        for(int i=0; i<participants; i++)
        {
            int rate;
            cin >> rate;
            results.push_back(rate);
        }
 
        for(list<int>::iterator i=results.begin(); i!=results.end(); i++)
        {
 
            if(*i > top_rate) top_rate = *i;
        }
 
        int how_many_top_rates;
        how_many_top_rates = 0;
 
        for(list<int>::iterator i=results.begin(); i!=results.end(); i++)
        {
 
            if(*i == top_rate) how_many_top_rates++;
        }
 
        while(how_many_top_rates--)
        {
            ranking.push_front(top_rate);
        }
 
        results.remove(top_rate);
 
        //top rate
 
        int how_many_bottom_rates;
 
        while(results.size()!=0)
        {
                    bottom_rate = top_rate;
                    how_many_bottom_rates = 0;
 
                    for(list<int>::iterator i=results.begin(); i!=results.end(); i++)
                    {
                        if(*i < bottom_rate) bottom_rate = *i;
                    }
 
                    for(list<int>::iterator i=results.begin(); i!=results.end(); i++)
                    {
 
                        if(*i == bottom_rate) how_many_bottom_rates++;
                    }
 
                    while(how_many_bottom_rates--)
                    {
                        ranking.push_back(bottom_rate);
                    }
 
                    results.remove(bottom_rate);
 
        }
 
 
        for(list<int>::iterator i=ranking.begin(); i!=ranking.end(); i++)
        {
            cout << *i << " ";
        }
 
 
        cout << endl;
 
        how_many_top_rates = 0;
        top_rate = 0;
        results.clear();
        ranking.clear();
 
    }
 
    return 0;
}
