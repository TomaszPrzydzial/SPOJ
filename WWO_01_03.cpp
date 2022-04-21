#include <iostream>
 
using namespace std;
 
int main()
{
    int cars;
    cin >> cars;
 
    double *time_on_finish = new double[cars];
    int *start_distance = new int[cars];
 
    for(int i=0; i<cars; i++)
    {
        double distance, velocity;
        cin >> distance >> velocity;
 
        time_on_finish[i]=distance/velocity;
        start_distance[i]=distance;
    }
 
    int k, s_cars=0, f_cars=0;
    cin >> k;
 
    for(int i=0; i<cars; i++)
    {
        if(i!=k-1)
        {
            if(time_on_finish[i]>time_on_finish[k-1] && start_distance[i]<start_distance[k-1]) s_cars++;
            else if(time_on_finish[i]<time_on_finish[k-1] && start_distance[i]>start_distance[k-1]) f_cars++;
        }
    }
 
    cout << s_cars << " " << f_cars << endl;
 
    return 0;
}
