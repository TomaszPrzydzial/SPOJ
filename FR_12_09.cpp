#include <iostream>
 
using namespace std;
 
char KOT[] = {'k', 'o', 't'};
 
int main()
{
    string line;
    cin >> line;
 
    int index = 0;
    int counter = 0;
 
    for(int i=0; i<line.length(); i++)
    {
        if(line[i]==KOT[index]) index++;
        if(index==3)
        {
            index=0;
            counter++;
        }
    }
 
    if(counter==0) cout << "NIE" << endl;
    else cout << counter << endl;
 
    return 0;
}
