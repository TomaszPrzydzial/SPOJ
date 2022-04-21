#include <iostream>
 
using namespace std;
 
char trigraph(int code)
{
    char graph_code;
 
    switch(code)
    {
        case 61: graph_code=35; break;  //       = -> #      //
        case 47: graph_code=92; break;  //       / -> \      //
        case 39: graph_code=94; break;  //       ' -> ^      //
        case 40: graph_code=91; break;  //       ( -> [      //
        case 41: graph_code=93; break;  //       ) -> ]      //
        case 33: graph_code=124; break; //       ! -> |      //
        case 60: graph_code=123; break; //       < -> {      //
        case 62: graph_code=125; break; //       > -> }      //
        case 45: graph_code=126; break; //       - -> ~      //
    }
 
    return graph_code;
}
 
int main()
{
    string line;
 
    while(getline(cin, line))
    {
        for(int i=0; i<line.length(); i++)
        {
            if(line[i]==63 && line[i+1]==63)
            {
                cout << trigraph((int)line[i+2]);
                i+=2;
            }
            else cout << line[i];
        }
        
        cout << endl;
    }
 
    return 0;
}
