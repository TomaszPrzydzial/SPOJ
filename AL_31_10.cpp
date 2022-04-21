#include <iostream>
#include <sstream>
#include <vector>
 
using namespace std;
 
int letter_counter[26];
 
vector <string> splitter(string string_to_split)
{
    stringstream to_split(string_to_split);
    string item;
    vector <string> splitted_strings;
 
    while(getline(to_split, item, '.'))
    {
        splitted_strings.push_back(item);
    }
 
    return splitted_strings;
}
 
int main()
{
    fill(letter_counter, letter_counter+26, 0);
    vector <string> sentences;
 
    int sentence_counter=0;
    string result;
    string line;
 
    while(getline(cin, line))
    {
        if(line == "K\n") break;
        result+=line;
    }
 
      sentences=splitter(result);
 
        for(int i=0; i<sentences.size(); i++)
        {
            sentence_counter++;
 
            for(int k=0; k<sentences[i].length(); k++)
            {
                int code=sentences[i][k];
 
                if(code>=97 && code<=122) code-=32;
                if(code>=65 && code<=90) letter_counter[code-65]++;
            }
 
            int most_active_index=0;
            for(int j=0; j<26; j++) if(letter_counter[j]>letter_counter[most_active_index]) most_active_index=j;
 
            bool is_too_active=true;
            for(int j=0; j<26; j++)
            {
                if(j!=most_active_index)
                {
                    if(letter_counter[most_active_index]<=letter_counter[j]*2)
                    {
                        is_too_active=false;
                        break;
                    }
                }
            }
 
            if(is_too_active) cout << sentence_counter << " - " << (char)(most_active_index+97);
            else cout << sentence_counter << " - " << "BRAK";
            cout << endl;
 
            fill(letter_counter, letter_counter+26, 0);
        }
        sentences.clear();
 
    return 0;
}
