#include <iostream>
 
using namespace std;
 
int main()
{
    int number, year;
    cin >> number >> year;
 
    number = to_string(number).back()-48;
 
    number*=2;
    number+=5;
    number*=50;
    number+=1771;
    number-=year;
 
    string result = to_string(number);
    if(result.length()>2) result = result.substr(result.length()-2, result.length()-1);
 
    if(result[0]=='0') cout << result[1];
    else cout << result;
 
    cout << endl;
 
    return 0;
}
