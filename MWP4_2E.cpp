#include <iostream>
#include <list>
 
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        unsigned short int persons, text_messages, gossiper;
        cin >> persons >> text_messages >> gossiper;
 
        bool *person_knowledge = new bool[persons];
        fill(person_knowledge, person_knowledge+persons, false);
 
        list <unsigned short int> gossip_route;
 
        person_knowledge[gossiper-1]=true;
        gossip_route.push_back(gossiper);
 
        while(text_messages--)
        {
            unsigned short int sender, receiver;
            cin >> sender >> receiver;
 
            if(person_knowledge[sender-1])
            {
                if(!person_knowledge[receiver-1])
                {
                    gossip_route.push_back(receiver);
                    person_knowledge[receiver-1]=true;
                }
            }
        }
 
        for(list<unsigned short int>::iterator i=gossip_route.begin(); i!=gossip_route.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
 
    return 0;
}
