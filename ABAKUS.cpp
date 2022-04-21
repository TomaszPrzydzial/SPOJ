#include <iostream>
 
using namespace std;
 
string delete_lead_zeros(string str)
{
    string result;
 
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!='0') {result=str.substr(i, str.length()); break;}
    }
 
    if(result.length()==0) result="0";
 
    return result;
}
 
void generate_abakus(char **abakus_pointer, int abakus_len)
{
    for(int i=0; i<15; i++)
    {
        abakus_pointer[i]=new char[abakus_len];
        for(int k=0; k<abakus_len; k++) abakus_pointer[i][k]=' ';
    }
 
    for(int k=0; k<abakus_len; k++)
    {
        abakus_pointer[0][k]='-'; abakus_pointer[14][k]='-';
        abakus_pointer[1][k]='*'; abakus_pointer[13][k]='*';
        abakus_pointer[4][k]='-';
    }
    for(int i=1; i<14; i++) {abakus_pointer[i][0]='|'; abakus_pointer[i][abakus_len-1]='|';}
 
    return;
}
 
void show_abakus(char **abakus_pointer, int abakus_len)
{
    for(int i=0; i<15; i++)
    {
        for(int k=0; k<abakus_len; k++) cout << abakus_pointer[i][k];
        cout << endl;
    }
 
    return;
}
 
void set_abakus_pos(char **abakus_pointer, int position, int digit)
{
    if(digit>=5) {abakus_pointer[3][position]='*'; digit-=5;}
    else abakus_pointer[2][position]='*';
 
    for(int j=5; j<5+digit; j++) abakus_pointer[j][position]='*';
 
    for(int j=12; j>8+digit; j--) abakus_pointer[j][position]='*';
 
    return;
}
 
string caluclate_abakus_value(char **abakus_pointer, int abakus_len)
{
    string result;
 
    for(int i=1; i<abakus_len-1; i++)
    {
        int digit=0;
        if(abakus_pointer[3][i]=='*') digit+=5;
        for(int k=5; k<=8; k++) if(abakus_pointer[k][i]=='*') digit++;
 
        result+=to_string(digit);
    }
 
    return delete_lead_zeros(result);
}
 
int main()
{
    char op;
 
    while(cin >> op)
    {
        cin.ignore();
        char **abakus_arr = new char *[15];
 
        switch(op)
        {
            case '0':
                int abakus_len;
 
                for(int i=0; i<15; i++)
                {
                    string abakus_line;
                    getline(cin, abakus_line);
 
                    abakus_len=abakus_line.length();
 
                    abakus_arr[i]=new char[abakus_len];
                    for(int k=0; k<abakus_len; k++) abakus_arr[i][k]=abakus_line[k];
                }
 
                cout << caluclate_abakus_value(abakus_arr, abakus_len) << endl;
            break;
 
            case '1':
                string abakus_string;
                cin >> abakus_string;
 
                abakus_string=delete_lead_zeros(abakus_string);
 
                generate_abakus(abakus_arr, abakus_string.length()+2);
 
                for(int i=0; i<abakus_string.length(); i++)
                set_abakus_pos(abakus_arr, i+1, abakus_string[i]-'0');
 
                show_abakus(abakus_arr, abakus_string.length()+2);
            break;
        }
 
        delete [] abakus_arr;
    }
 
    return 0;
}
