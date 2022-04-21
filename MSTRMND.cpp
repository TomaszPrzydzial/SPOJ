#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int try_table[4][6];
bool wins[4] = {false, false, false, false};
 
void build_try_table()
{
    for(int i=0; i<4; i++)
    {
        for(int k=0; k<6; k++)
        {
           try_table[i][k]=k+1;
        }
    }
}
 
void debug_show()
{
    for(int i=0; i<6; i++)
    {
        for(int k=0; k<4; k++) cout << try_table[k][i] << " ";
        cout << endl;
    }
}
 
void delete_from_table(int number)
{
    for(int i=0; i<4; i++) if(wins[i]==false) try_table[i][number-1] = 0;
}
 
void set_answer_at_pos(int position, int answer)
{
    for(int i=0; i<6; i++) try_table[position][i]=0;
    try_table[position][answer-1]=answer;
 
    wins[position]=true;
}
 
void delete_answer_at_pos(int position, int answer)
{
    try_table[position][answer-1]=0;
}
 
bool check_win()
{
    bool win=true;
 
    for(int i=0; i<4; i++)
    {
        if(!wins[i]) {win=false; break;}
    }
 
    return win;
}
 
int main()
{
    setlinebuf(stdout);
    //int pattern[4] = {6,5,2,1};
    int tries=10;
    int answer[4];
    int clues[4];
 
    build_try_table();
 
    while(tries--)
    {
        if(check_win()) break;
 
        //debug_show();
        //cout << "_______" << endl;
 
        //try
        for(int i=0; i<4; i++)
        {
            int rot=i;
 
            omt:
 
            for(int k=rot; k<6; k++)
            {
                if(try_table[i][k]!=0)
                {
                    answer[i]=try_table[i][k];
                    rot=0;
                    break;
                }
            }
 
            if(rot!=0) {rot=0; goto omt;}
 
            cout << answer[i] << " ";
        }
 
        cout << endl;
 
        //get clues
        cin >> clues[0] >> clues[1] >> clues[2] >> clues[3];
 
        /*automatic get clues
        for(int i=0; i<4; i++)
        {
            if(answer[i]==pattern[i]) clues[i]=1;
            else
            {
                bool there_is=false;
                for(int k=0; k<4; k++) if(pattern[k]==answer[i]) there_is=true;
 
                if(there_is==true) clues[i]=0;
                else clues[i]=-1;
            }
 
            cout << clues[i] << " ";
        }
        cout << endl;
        */
 
        //learn from clues
        for(int i=0; i<4; i++)
        {
            if(clues[i]==-1) delete_from_table(answer[i]);
            else if(clues[i]==0) delete_answer_at_pos(i, answer[i]);
            else set_answer_at_pos(i, answer[i]);
        }
 
        cout << endl;
        fflush(stdout);
    }
 
    return 0;
}
