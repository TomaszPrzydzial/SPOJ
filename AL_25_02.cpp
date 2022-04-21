#include <iostream>
 
using namespace std;
 
int main()
{
    string line;
    int last_index;
    char decrypt_tab[100];
 
    while(getline(cin, line))
    {
        last_index=1;
        fill(decrypt_tab, decrypt_tab+100, 32);
 
        char temp_char=char(int(line[0]-48)*10+int(line[1]-48));
        int temp_count=int(line[2]-48)*10+int(line[3]-48);
        int temp_entries=0;
 
        for(int i=4; i<line.length(); i+=2)
        {
            int temp_code=int(line[i]-48)*10+int(line[i+1]-48);
 
            if(temp_count==0)
            {
                temp_count=temp_code;
            }
            else if(temp_entries<temp_count)
            {
                decrypt_tab[temp_code-1]=temp_char;
                temp_entries++;
                if(last_index<temp_code) last_index=temp_code;
            }
            else if(temp_entries==temp_count)
            {
                temp_char=char(temp_code);
                temp_count=0;
                temp_entries=0;
            }
        }
 
        for(int i=0; i<last_index; i++)
        {
            cout << decrypt_tab[i];
        }
 
        cout << "\n";
    }
 
 
    return 0;
}
