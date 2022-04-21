#include <iostream>
#include <string.h>
#include <cstdlib>
 
using namespace std;
 
string parse_line(string text_line, string start_phrase ,char period_code)
{
    string temp_string;
    int start_index=text_line.find(start_phrase);
 
    for(int i=start_index+start_phrase.length(); i<text_line.length(); i++)
    {
        if(text_line[i]==period_code) break;
        else temp_string+=text_line[i];
    }
 
    return temp_string;
}
 
int parse_date(string date_line, int start_index, int end_index)
{
    string temp_string;
    for(int i=start_index; i<end_index; i++)
    {
        temp_string+=date_line[i];
    }
 
    int result=0;
    int multiplier=1;
 
    for(int i=temp_string.length()-1; i>=0; i--)
    {
        if(temp_string[i]<48 || temp_string[i]>57) return 0;
        else
        {
            result += (temp_string[i]-48) * multiplier;
            multiplier *= 10;
        }
    }
 
    return result;
}
 
bool validate_string(string name_string, int max_length)
{
    if(name_string.length()>max_length-1) return false;
    if(name_string[0]<65 || name_string[0]>90) return false;
 
    for(int i=1; i<name_string.length(); i++)
    {
        if(name_string[i]<97 || name_string[i]>122) return false;
    }
 
    return true;
}
 
 
int main()
{
    string line;
 
    while(getline(cin, line))
    {
        if(line[0]==NULL) break;
 
        string name = parse_line(line, "Imie: ", ';');
        string surname = parse_line(line, "Nazwisko: ", ';');
        string date = parse_line(line, "ur.: ", ';');
        int year = parse_date(date, 0, 4);
        int month = parse_date(date, 5, 7);
        int day = parse_date(date, 8, 10);
 
        if(!validate_string(name, 10)) cout << 0;
        else if (!validate_string(surname, 20)) cout << 1;
        else if (year>2000 || year<1900 || month<1 || month>12 || day<1 || day>31) cout << 2;
        else cout << 3;
 
        cout << endl;
    }
 
    return 0;
}
