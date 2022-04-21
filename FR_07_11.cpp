#include <iostream>
#include <vector>
 
using namespace std;
 
vector <int> lifo;
vector <int> fifo;
vector <int> prior;
 
int main()
{
    int n;
    cin >> n;
 
    int queue_index=0;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
 
        if(queue_index==0) lifo.push_back(num);
        else if(queue_index==1) fifo.push_back(num);
        else if(queue_index==2) prior.push_back(num);
 
        queue_index++;
        if(queue_index>2) queue_index=0;
    }
 
    queue_index=0;
    int lifo_idx = lifo.size()-1;
    int fifo_idx = 0;
    int prior_idx = 0;
 
    for(int i=0; i<n; i++)
    {
        if(queue_index==0) {cout << lifo[lifo_idx] << " "; lifo_idx--;}
        else if(queue_index==1) {cout << fifo[fifo_idx] << " "; fifo_idx++;}
        else if(queue_index==2) {cout << prior[prior_idx] << " "; prior_idx++;}
 
        queue_index++;
        if(queue_index>2) queue_index=0;
    }
 
    return 0;
}
