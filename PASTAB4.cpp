#include <iostream>
#include <math.h>
 
using namespace std;
 
int histogram_tab[21]={0};
const int width=30;
 
int main()
{
    short int temp_num;
 
    while(cin >> temp_num)
    {
        if(temp_num==0) histogram_tab[10]++;
        else histogram_tab[10+temp_num]++;
    }
 
    int max_value=0;
    for(int i=0; i<21; i++) if(histogram_tab[i]>max_value) max_value = histogram_tab[i];
 
    for(int i=0; i<21; i++)
    {
        string num = to_string(-10+i);
        int num_space = 4-num.length();
 
        for(int i=0; i<num_space; i++) cout << " ";
        cout << num << ":|";
 
        int value = round(width*histogram_tab[i]/float(max_value));
 
        for(int i=0; i<width; i++)
        {
            if(i<value) cout << "*";
            else cout << " ";
        }
 
        cout << "|" << endl;
    }
 
    return 0;
}
