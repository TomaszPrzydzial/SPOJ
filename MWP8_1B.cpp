#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    vector <string> lyrics;
    vector <string> song;
    string line, word;
 
    getline(cin, line);
    line+=" ";
 
    for(int i=0; i<line.length(); i++)
    {
        if(line[i]!=32) word+=line[i];
        else {lyrics.push_back(word); word.clear();}
    }
 
    getline(cin, line);
    line+=" ";
 
    for(int i=0; i<line.length(); i++)
    {
        if(line[i]!=32) word+=line[i];
        else {song.push_back(word); word.clear();}
    }
 
    cout << lyrics.size()-song.size() << endl;
 
    int index=0;
    vector <string> frgtn_words;
 
    for(int i=0; i<lyrics.size(); i++)
    {
        if(lyrics[i]==song[index]) index++;
        else frgtn_words.push_back(lyrics[i]);
    }
 
    sort(frgtn_words.begin(), frgtn_words.end());
    for(int i=0; i<frgtn_words.size(); i++) cout << frgtn_words[i] << endl;
 
    return 0;
}
