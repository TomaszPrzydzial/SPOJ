#include <iostream>
 
using namespace std;
 
char staff_segment[11][104];
 
string notes[3][7]=
{
    {"--|\\", "  |\\", "--|\\", "  |\\","--|\\","  |\\","--|\\"},
    {"  | ",  "--|-",  "  | " , "--|-", "  | " ,"--|-", "  | "},
    {"-o|-",  "#o| ",  "#o|-" , " o| ", "-o|-" ,"#o| ", "#o|-"},
};
 
void generate_clear_staff_segment()
{
    for(int i=0; i<11; i+=2) for(int k=0; k<104; k++) staff_segment[i][k]=' ';
    for(int i=1; i<11; i+=2) for(int k=0; k<104; k++) staff_segment[i][k]='-';
    for(int i=0; i<11; i++) for(int k=0; k<104; k+=26) {staff_segment[i][k]='|'; staff_segment[i][k+25]='|';}
}
 
void print_staff()
{
    for(int i=0; i<11; i++)
    {
        for(int k=0; k<104; k++)
        {
            if(k%26==0 && k!=0) k++;
            cout << staff_segment[i][k];
        }
        cout << endl;
    }
}
 
void set_note_on_staff(int position, int note_code)
{
    if(note_code==0) return;
 
    int staff_x=(position*6)+2*((position/4)+1);
    int staff_y=8-note_code;
 
    for(int i=0; i<3; i++)
    {
        for(int k=0; k<4; k++)
        {
            staff_segment[staff_y+i][staff_x+k]=notes[i][note_code-1][k];
        }
    }
}
 
int main()
{
    int notes;
    cin >> notes;
 
    int seg_num=0;
    while(seg_num*16<notes) seg_num++;
 
    int* melody = new int[seg_num*16];
    fill(melody, melody+seg_num*16, 0);
 
    for(int i=0; i<notes; i++)
    {
        string note;
        cin >> note;
 
        int note_sum=0;
        for(int k=0; k<note.length(); k++) note_sum+=note[k];
 
        int note_code;
        switch(note_sum)
        {
            case 69: note_code=1; break;
            case 105: note_code=2; break;
            case 106: note_code=3; break;
            case 65: note_code=4; break;
            case 72: note_code=5; break;
            case 102: note_code=6; break;
            case 103: note_code=7; break;
        }
 
        melody[i] = note_code;
    }
 
    int node_index=0;
    for(int i=0; i<seg_num; i++)
    {
        generate_clear_staff_segment();
 
        for(int k=node_index; k<node_index+16; k++)
        {
            set_note_on_staff(k%16, melody[k]);
        }
 
        print_staff();
        node_index+=16;
    }
 
    return 0;
}
