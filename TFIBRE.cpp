#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
bool node_is_found;
string seek_node_name;
 
class Node
{
public:
 
    bool visited;
 
    int index;
    string name;
    vector <Node*> connections;
 
        Node(int i, string n)
        {
            index = i;
            name = n;
        }
 
        void put_new_connection(Node *node_address)
        {
            connections.push_back(node_address);
        }
 
        void flood()
        {
            if(visited==true || node_is_found==true) return;
 
            visited=true;
 
            for(int i=0; i<connections.size(); i++)
            {
                if((*(connections[i])).name==seek_node_name)
                {
                    (*(connections[i])).visited = true;
                    node_is_found=true;
                    break;
                }
                else (*(connections[i])).flood();
            }
        }
 
        void show_connections()
        {
            for(int i=0; i<connections.size(); i++)
            {
                cout << name << " has connection with: " << (*(connections[i])).name << endl;
            }
        }
};
 
vector <string> add_tab;
vector <Node*> nodes_tab;
 
void put_new_address(string address)
{
    if(find(add_tab.begin(), add_tab.end(),address)!=add_tab.end());
    else
    {
        int indx = nodes_tab.size();
 
        add_tab.push_back(address);
        nodes_tab.push_back(new Node(indx, address));
    }
 
    return;
}
 
pair <int, int> return_index_of_address(string add_A, string add_B)
{
    int index_A=-1;
    int index_B=-1;
 
    for(int i=0; i<add_tab.size(); i++)
    {
        if(index_A!=-1 && index_B!=-1)
        {
             break;
        }
        else
        {
            if(add_tab[i]==add_A) index_A=i;
            if(add_tab[i]==add_B) index_B=i;
        }
    }
 
    return {index_A, index_B};
}
 
void put_new_connection(string add_A, string add_B)
{
    pair <int, int> indexes = return_index_of_address(add_A, add_B);
 
    int index_A = indexes.first;
    int index_B = indexes.second;
 
    Node *A_address = &(*(nodes_tab[index_A]));
    Node *B_address = &(*(nodes_tab[index_B]));
 
    (*(B_address)).put_new_connection(A_address);
    (*(A_address)).put_new_connection(B_address);
}
 
bool check_connection(string add_A, string add_B)
{
    node_is_found=false;
    seek_node_name=add_B;
 
    bool is_connected=false;
 
    pair <int, int> indexes = return_index_of_address(add_A, add_B);
 
    int index_A = indexes.first;
    int index_B = indexes.second;
 
    if(index_A==-1 || index_B==-1) return is_connected;
 
    for(int i=0; i<nodes_tab.size(); i++)
    {
        (*(nodes_tab[i])).visited=false;
    }
 
    (*(nodes_tab[index_A])).flood();
 
    is_connected=(*(nodes_tab[index_B])).visited;
 
    return is_connected;
}
int main()
{
    char op_code;
 
    while(cin>>op_code)
    {
        string add_A, add_B;
 
        cin >> add_A >> add_B;
 
        switch(op_code)
        {
            case 'B':
            put_new_address(add_A);
            put_new_address(add_B);
            put_new_connection(add_A, add_B);
            break;
 
            case 'T':
            if(check_connection(add_A, add_B)) cout << "T" << endl;
            else cout << "N" << endl;
            break;
        }
    }
 
    return 0;
}
