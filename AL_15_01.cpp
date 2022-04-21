    #include <iostream>
    #include <string>
 
    using namespace std;
 
    string darek;
    string marek;
    string jarek;
 
    unsigned long long int result_max;
 
    int main()
    {
            getline(cin, darek);
            getline(cin, marek);
            getline(cin, jarek);
 
            for(int i=0; i<darek.length(); i++)
            {
                if(marek[i]!=darek[i])
                {
                    result_max++;
                    if(jarek[i]==marek[i]) result_max++;
                }
                else if (jarek[i]!=darek[i]) result_max++;
            }
 
            cout << result_max << endl;
 
        return 0;
    }
