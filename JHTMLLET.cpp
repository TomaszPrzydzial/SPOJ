    #include <iostream>
    #include <list>
    #include <string.h>
 
    using namespace std;
 
    char input[8192];
    char *pointer;
 
    list <char> output;
 
    int main()
    {
        pointer = &input[0];
 
        while(cin.getline(input, sizeof(input)))
        {
 
        bool UP;
 
        for(int i=0; i<sizeof(input); i++)
        {
            //brackets detection
            if((int)(*(pointer+i))==60) UP=true;
            else if((int)(*(pointer+i))==62) UP=false;
 
            if(UP==true) *(pointer+i)=toupper(*(pointer+i));
 
            if((int)*(pointer+i)!=0) output.push_back(*(pointer+i));
 
        }
 
        for(list<char>::iterator i = output.begin(); i!=output.end(); i++)
        {
            cout << *i;
        }
 
        memset(input, 0, sizeof(input));
        output.clear();
        cout << endl;
 
        }
 
 
 
        return 0;
    }
