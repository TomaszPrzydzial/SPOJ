#include <iostream>
 
using namespace std;
 
pair <string, string> color_table[16];
 
string dec_to_hex(int num)
{
    string hex_string="";
    char hex_tab[20];
    sprintf(hex_tab, "%X", num);
 
    if(num<16) hex_string="0";
 
    hex_string+=hex_tab;
 
    return hex_string;
}
 
string make_hex_color(int r, int g, int b)
{
    return "#"+dec_to_hex(r)+dec_to_hex(g)+dec_to_hex(b);
}
 
string get_color_name(string color_hex)
{
    for(int i=0; i<16; i++)
    {
        if(color_table[i].second==color_hex) return color_table[i].first;
    }
 
    return color_hex;
}
 
void generate_color_tables();
 
int main()
{
    generate_color_tables();
 
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        int red, green, blue;
        cin >> red >> green >> blue;
 
        string hex_color=make_hex_color(red, green, blue);
 
        cout << get_color_name(hex_color) << endl;
    }
 
 
    return 0;
}
 
void generate_color_tables()
{
    color_table[0].first="black"; color_table[0].second="#000000";
    color_table[1].first="silver"; color_table[1].second="#C0C0C0";
    color_table[2].first="gray"; color_table[2].second="#808080";
    color_table[3].first="white"; color_table[3].second="#FFFFFF";
    color_table[4].first="maroon"; color_table[4].second="#800000";
    color_table[5].first="red"; color_table[5].second="#FF0000";
    color_table[6].first="purple"; color_table[6].second="#800080";
    color_table[7].first="fuchsia"; color_table[7].second="#FF00FF";
    color_table[8].first="green"; color_table[8].second="#008000";
    color_table[9].first="lime"; color_table[9].second="#00FF00";
    color_table[10].first="olive"; color_table[10].second="#808000";
    color_table[11].first="yellow"; color_table[11].second="#FFFF00";
    color_table[12].first="navy"; color_table[12].second="#000080";
    color_table[13].first="blue"; color_table[13].second="#0000FF";
    color_table[14].first="teal"; color_table[14].second="#008080";
    color_table[15].first="aqua"; color_table[15].second="#00FFFF";
}
