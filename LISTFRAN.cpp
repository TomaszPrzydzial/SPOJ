#include <iostream>
 
using namespace std;
 
int main()
{
    int streets, post_street;
    cin >> streets >> post_street;
 
    bool* nodes = new bool[streets];
    fill(nodes, nodes+streets, true);
 
    for(int i=0; i<streets; i++)
    {
        int A_node, B_node;
        cin >> A_node >> B_node;
 
        nodes[A_node-1]=!nodes[A_node-1];
        nodes[B_node-1]=!nodes[B_node-1];
    }
 
    bool has_circuit=true;
    for(int i=0; i<streets; i++)
    {
        if(!nodes[i])
        {
            has_circuit=false;
            break;
        }
    }
 
    if(has_circuit) cout << "TAK";
    else cout << "NIE";
    cout << endl;
 
    return 0;
}
