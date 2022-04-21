#include <iostream>
#include <algorithm>
 
using namespace std;
 
pair <int, int> dominos_template[28]=
{
    {0,0},
    {0,1},
    {0,2},
    {0,3},
    {0,4},
    {0,5},
    {0,6},
    {1,1},
    {1,2},
    {1,3},
    {1,4},
    {1,5},
    {1,6},
    {2,2},
    {2,3},
    {2,4},
    {2,5},
    {2,6},
    {3,3},
    {3,4},
    {3,5},
    {3,6},
    {4,4},
    {4,5},
    {4,6},
    {5,5},
    {5,6},
    {6,6},
};
 
bool compare_dominos(pair <int, int> A, pair <int, int> B)
{
    if(A.first==B.first) return A.second<B.second;
    else return A.first<B.first;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        pair <int, int> dominos[27];
 
        for(int i=0; i<27; i++)
        {
            string domino;
            cin >> domino;
 
            int domino_A = domino[0]-48;
            int domino_B = domino[2]-48;
 
            if(domino_A<domino_B)
            {
                dominos[i].first=domino_A;
                dominos[i].second=domino_B;
            }
            else
            {
                dominos[i].first=domino_B;
                dominos[i].second=domino_A;
            }
        }
 
        sort(dominos, dominos+27, &compare_dominos);
 
        int missing_index=27;
 
        for(int i=0; i<27; i++)
        {
            if(dominos[i]!=dominos_template[i]) {missing_index=i; break;}
        }
 
        cout << dominos_template[missing_index].first << "|" << dominos_template[missing_index].second << endl;
    }
 
    return 0;
}
