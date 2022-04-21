#include <iostream>
 
using namespace std;
 
int sudoku_tab[9][9];
int check_array[9];
 
void create_sudoku();
void display_sudoku();
 
bool check_squares();
bool check_lines();
bool check_digits();
 
int main()
{
    unsigned int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        create_sudoku();
 
        if(check_squares() && check_lines()) cout << "TAK";
        else cout << "NIE";
        cout << endl;
    }
 
    return 0;
}
 
void create_sudoku()
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cin >> sudoku_tab[i][j];
        }
    }
 
    return;
}
 
void display_sudoku()
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cout << sudoku_tab[i][j] << " ";
        }
 
        cout << endl;
    }
 
    return;
}
 
bool check_squares()
{
    int runs=9;
    int start_i = 0;
    int start_j = 0;
 
    while(runs--)
    {
        int small_iter = 0;
 
        for(int i=start_i; i<start_i+3; i++)
        {
            for(int j=start_j; j<start_j+3; j++)
            {
                check_array[small_iter]=sudoku_tab[i][j];
                small_iter++;
            }
        }
 
        if(!check_digits()) return false;
 
        start_i+=3;
        if(start_i==9)
        {
            start_i=0;
            start_j+=3;
        }
    }
 
    return true;
}
 
bool check_lines()
{
    for(int i=0; i<9; i++)
    {
        int small_iter = 0;
 
        for(int j=0; j<9; j++)
        {
            check_array[small_iter]=sudoku_tab[i][j];
            small_iter++;
        }
 
        if(!check_digits()) return false;
    }
 
    for(int i=0; i<9; i++)
    {
        int small_iter = 0;
 
        for(int j=0; j<9; j++)
        {
            check_array[small_iter]=sudoku_tab[j][i];
            small_iter++;
        }
 
        if(!check_digits()) return false;
    }
 
    return true;
}
 
bool check_digits()
{
    bool legit_tab[9] = {false};
 
    for(int i=0; i<9; i++)
    {
        if(check_array[i]==1) legit_tab[0]=true;
        if(check_array[i]==2) legit_tab[1]=true;
        if(check_array[i]==3) legit_tab[2]=true;
        if(check_array[i]==4) legit_tab[3]=true;
        if(check_array[i]==5) legit_tab[4]=true;
        if(check_array[i]==6) legit_tab[5]=true;
        if(check_array[i]==7) legit_tab[6]=true;
        if(check_array[i]==8) legit_tab[7]=true;
        if(check_array[i]==9) legit_tab[8]=true;
    }
 
    for(int i=0; i<9; i++)
    {
        if(!legit_tab[i]) return false;
    }
 
    return true;
}
