#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string word;
    cin >> word;
 
 
    if (word.find("sto") != string::npos) cout << "TAK\n";
    else cout << "NIE\n";
 
    return 0;
}
