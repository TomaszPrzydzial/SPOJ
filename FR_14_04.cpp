#include <iostream>
 
using namespace std;
 
char values[] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
 
int get_result(string seq)
{
    int result=0;
 
    for(int i=0; i<seq.length(); i++)
    {
        for(int k=0; k<sizeof(values)/sizeof(*values); k++)
        {
            if(seq[i]==values[k])
            {
                result+=k+2;
                break;
            }
        }
    }
    
    return result;
}
 
int main()
{
    string jasio, stasio;
    cin >> jasio >> stasio;
 
    int jasio_result = get_result(jasio);
    int stasio_result = get_result(stasio);
 
    if(jasio_result==stasio_result) cout << "REMIS\n";
    else if(jasio_result>stasio_result) cout << "JASIO\n";
    else cout << "STASIO\n";
 
    return 0;
}
