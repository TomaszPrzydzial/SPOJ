#include <iostream>
#include <vector>
 
using namespace std;
 
vector <pair <int, int>> numbers;
 
int main()
{
    int num;
 
    while(cin >> num)
    {
        bool inserted=false;
 
        for(int i=0; i<numbers.size(); i++)
        {
            if(numbers[i].first==num)
            {
                numbers[i].second++;
                inserted=true;
 
                if(numbers[i].second==3) numbers.erase(numbers.begin()+i);
                break;
            }
        }
 
        if(inserted==false) numbers.push_back(make_pair(num, 1));
    }
 
    cout << numbers[0].first << endl;
 
    return 0;
}
