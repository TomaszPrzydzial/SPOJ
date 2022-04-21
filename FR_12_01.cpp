#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    pair<int, int> persons[3] = {{0, 1}, {0, 2}, {0, 3}};
    cin >> persons[0].first >> persons[1].first >> persons[2].first;
 
    sort(persons, persons+3);
 
    if(persons[0].first!=persons[1].first) cout << "TAK " << persons[0].second << endl;
    else cout << "NIE" << endl;
 
    return 0;
}
