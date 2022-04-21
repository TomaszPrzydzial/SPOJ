#include <iostream>
 
using namespace std;
 
int edges_arr[14144]={0};
 
int calculate_edges(double nodes)
{
    return (nodes/2)*(nodes-1);
}
 
int main()
{
    int* edges_arr_ptr = &edges_arr[0];
    for(int i=1; i<=14144; i++)
    {
        *(edges_arr_ptr+i)=calculate_edges((double)i);
    }
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int connections;
        cin >> connections;
 
        for(int i=1; i<=14144; i++)
        {
            if(connections==*(edges_arr_ptr+i)) {cout << "TAK" << endl; break;}
            else if(connections<*(edges_arr_ptr+i)) {cout << "NIE" << endl; break;}
        }
    }
 
    return 0;
}
