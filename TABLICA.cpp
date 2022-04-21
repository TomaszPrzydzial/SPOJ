#include <iostream>
#include <list>
 
using namespace std;
 
int main()
{
    int temp;
    list <int> lista;
 
    while(cin >> temp)
    {
        lista.push_back(temp);
    }
 
    for(list<int>::reverse_iterator rit=lista.rbegin(); rit!=lista.rend();rit++)
    {
        cout << *rit << " ";
    }
 
    return 0;
}
