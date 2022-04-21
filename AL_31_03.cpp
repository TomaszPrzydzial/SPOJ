#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct PERSON
{
    char name;
    string surname;
    int age;
    long long int pesel;
};
 
bool is_capital_letter(char a)
{
    return ((int)a>=65 && (int)a<=90);
}
 
bool is_small_letter(char a)
{
    return ((int)a>=97 && (int)a<=122);
}
 
bool is_digit(char a)
{
    return ((int)a>=48 && (int)a<=57);
}
 
bool compare_PERSON(PERSON a, PERSON b)
{
    if(a.surname!=b.surname) return a.surname<b.surname;
    else if(a.name!=b.name) return a.name<b.name;
    else return a.pesel>b.pesel;
}
 
void print_person_info(PERSON person)
{
    cout << person.name << ". ";
    cout << person.surname << " ";
    cout << person.age << " ";
    cout << person.pesel << endl;
}
 
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string line;
    vector <PERSON> persons;
 
    while(getline(cin, line))
    {
        int actual_index=0;
        PERSON new_person;
 
        for(int i=0; i<=line.length(); i++)
        {
            if(is_capital_letter(line[actual_index]))
            {
                if(line[i]=='.') {new_person.name=line[i-1]; actual_index=i+1; i++;}
                else if(!is_small_letter(line[i]) || i==line.length()) {new_person.surname=line.substr(actual_index, i-actual_index); actual_index=i;}
            }
            else if(is_digit(line[actual_index]))
            {
                if((int)line[actual_index]<52) {new_person.age=stoi(line.substr(actual_index, 2)); actual_index+=2; i+=1;}
                else {new_person.pesel=stoll(line.substr(actual_index, 11)); actual_index+=11; i+=10;}
            }
        }
 
        persons.push_back(new_person);
    }
 
    sort(persons.begin(), persons.end(), &compare_PERSON);
 
    for(int i=0; i<persons.size(); i++) print_person_info(persons[i]);
 
    return 0;
}
