#include <iostream>
 
using namespace std;
 
int zloty[] = {5, 2, 1};
int grosz[] = {50, 20, 10, 5, 2, 1};
 
pair<int, int> parse_money(string value)
{
    int zl=0;
    int gr=0;
 
    int separator = value.find('.');
 
    int dec=1;
 
    for(int i=value.length()-1; i>separator; i--)
    {
        gr+=(value[i]-48)*dec;
        dec*=10;
    }
 
    dec=1;
 
    for(int i=separator-1; i>=0; i--)
    {
        zl+=(value[i]-48)*dec;
        dec*=10;
    }
 
    return make_pair(zl, gr);
}
 
int how_many_coins(string value)
{
    int coins = 0;
    pair<int, int> money = parse_money(value);
 
    for(int i=0; i<(sizeof(zloty)/sizeof(*zloty)); i++)
    {
        coins+=money.first/zloty[i];
        money.first%=zloty[i];
    }
 
    for(int i=0; i<(sizeof(grosz)/sizeof(*grosz)); i++)
    {
        coins+=money.second/grosz[i];
        money.second%=grosz[i];
    }
 
    return coins;
}
 
int main()
{
    string value;
    cin >> value;
 
    cout << how_many_coins(value) << endl;
 
    return 0;
}
