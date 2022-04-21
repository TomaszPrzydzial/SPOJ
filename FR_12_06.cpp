#include <iostream>
 
using namespace std;
 
int main()
{
    string seq;
    cin >> seq;
 
    int pluses=0;
    int minuses=0;
 
    for(int i=0; i<seq.length(); i++)
    {
        if(seq[i]=='+') pluses++;
        else minuses++;
    }
 
    int result = pluses-minuses;
 
    bool high_grade = false;
    if(result>0) high_grade=true;
 
    result = abs(result);
 
    for(int i=0; i<=result-3; i+=3)
    {
        if(high_grade) cout << "5 ";
        else cout << "1 ";
    }
 
    if(result<3) cout << "BRAK";
 
    cout << endl;
 
    return 0;
}
