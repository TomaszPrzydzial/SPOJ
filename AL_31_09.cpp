#include <iostream>
 
using namespace std;
 
char decrypt_arr[26] = {'K','X','V','M','C','N','O','P','H','Q','R','S','Z','Y','I','J','A','D','L','E','G','W','B','U','F','T'};
 
int main()
{
    string enc_line;
 
    while(getline(cin, enc_line))
    {
        for(int i=0; i<enc_line.length(); i++)
        {
            if(enc_line[i]!=32) cout << decrypt_arr[enc_line[i]-65];
            else cout << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}
