#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        string line;
        int k;
        cin >> line >> k;
 
        if(k!=1)
        {
            char**zigzag_arr = new char*[k];
            for(int i=0; i<k; i++)
            {
                zigzag_arr[i] = new char[line.length()];
                for(int j=0; j<line.length(); j++) zigzag_arr[i][j]=32;
            }
 
            bool down=true;
            int idx=0;
 
            for(int j=0; j<line.length(); j++)
            {
                zigzag_arr[idx][j]=line[j];
 
                if(down) idx++;
                else idx--;
 
                if(idx==0) down=true;
                if(idx==k-1) down=false;
            }
 
            for(int i=0; i<k; i++)
            {
                for(int j=0; j<line.length(); j++)
                {
                    if(zigzag_arr[i][j]!=32) cout << zigzag_arr[i][j];
                }
            }
 
            delete [] zigzag_arr;
        }
        else cout << line;
 
        cout << endl;
    }
 
    return 0;
}
