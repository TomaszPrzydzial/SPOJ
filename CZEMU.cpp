#include <iostream>
#include <string.h>
#include <list>
 
using namespace std;
 
bool compareFunction(string a, string b)
{
    return a<b;
}
 
int main()
{
    list <string> list_A, list_B, list_AxB;
 
    string line;
    int mode=0;
 
    while(getline(cin, line))
    {
        if(line=="List of solved classical problems:") {mode++; goto SKIP;}
 
        if(mode==1 || mode==2)
        {
            list <string>* list_pointer;
 
            if(mode==1) list_pointer=&list_A;
            else list_pointer=&list_B;
 
            line+=" ";
 
            string problem_name;
            for(int i=0; i<line.length(); i++)
            {
                if(line[i]==32 && problem_name!="") {list_pointer->push_back(problem_name); problem_name.clear();}
                else if(line[i]!=32 && line[i]!=9) problem_name+=line[i];
            }
        }
 
        SKIP: ;
    }
 
    for(auto it = list_B.begin(); it!=list_B.end(); ++it) list_A.remove(*it);
    
    list_A.sort();
 
    for(auto it = list_A.begin(); it!=list_A.end(); ++it) cout << *it << endl;
 
    return 0;
}
