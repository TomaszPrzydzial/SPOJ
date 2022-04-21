#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
long long int index;
vector <long long int> num_v;
 
void stat_line_parser(string line)
{
    long long int temp_num=0;
    long long int multiplier=1;
 
    num_v.clear();
 
    for(int i=line.length()-1; i>=0; i--)
    {
        if(line[i]==32)
        {
            if(find(num_v.begin(), num_v.end(),temp_num) != num_v.end());
            else num_v.push_back(temp_num);
 
            temp_num=0;
            multiplier=1;
        }
        else
        {
            if(line[i]>=48 && line[i]<=57)
            {
                temp_num+=multiplier*(line[i]-48);
                multiplier*=10;
            }
        }
    }
 
    sort(num_v.begin(), num_v.end(), greater<long long int>());
 
    index=temp_num;
 
    return;
}
 
int main()
{
    string input_line;
 
    while(getline(cin, input_line))
    {
        if(input_line.empty()) return 0;
 
        stat_line_parser(input_line);
 
        if(index<=num_v.size() && index>0) cout << num_v[index-1] << endl;
        else cout << "-" << endl;
    }
 
    return 0;
}
