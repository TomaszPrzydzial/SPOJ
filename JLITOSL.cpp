#include <iostream>
#include <cstdlib>
#include <string>
 
using namespace std;
 
int tests;
string unities_tab[20]={"","jeden","dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec","dziesiec","jedenascie","dwanascie","trzynascie","czternascie","pietnascie","szesnascie","siedemnascie","osiemnascie","dziewietnascie"};
string decimal_tab[10]={"dwadziescia","trzydziesci","czterdziesci","piecdziesiat","szescdziesiat","siedemdziesiat","osiemdziesiat","dziewiecdziesiat"};
string hundreds_tab[10]={"sto","dwiescie","trzysta","czterysta","piecset","szescset","siedemset","osiemset","dziewiecset"};
string multiplier[5]={"","tys.","mln.","mld.","bln."};
 
string convert_terce(short int number)
{
    string terce;
 
    if(number>=100)
    {
        terce+=hundreds_tab[number/100-1]; number=number%100;
        if(number!=0)terce+=" ";
    }
    if(number>=20)
    {
        terce+=decimal_tab[number/10-2]; number=number%10;
        if(number!=0)terce+=" ";
    }
    if(number>0)terce+=unities_tab[number];
 
    return terce;
}
 
string convert_to_word(unsigned long long int num)
{
    string num_segmented[5];
    string num_string = to_string(num);
    int last_index = num_string.length()-1;
 
    for(int i=last_index; i>=0; i--)
    {
        if(i<=last_index && i>last_index-3) num_segmented[0]=num_string[i]+num_segmented[0];
        if(i<=last_index-3 && i>last_index-6) num_segmented[1]=num_string[i]+num_segmented[1];
        if(i<=last_index-6 && i>last_index-9) num_segmented[2]=num_string[i]+num_segmented[2];
        if(i<=last_index-9 && i>last_index-12) num_segmented[3]=num_string[i]+num_segmented[3];
        if(i<=last_index-12 && i>last_index-15) num_segmented[4]=num_string[i]+num_segmented[4];
    }
 
    num_string.clear();
 
    for (int i=0; i<5; i++)
    {
        num_segmented[i]=convert_terce(atoi(num_segmented[i].c_str()));
 
        if(num_segmented[i]!="") num_string=num_segmented[i]+" "+multiplier[i]+" "+num_string;
    }
 
    return num_string;
 
}
 
int main()
{
    cin >> tests;
 
    while(tests--)
    {
        unsigned long long int number;
 
        cin >> number;
 
        cout << convert_to_word(number) << endl;
    }
 
    return 0;
}
