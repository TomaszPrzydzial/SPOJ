#include <iostream>
 
using namespace std;
 
int main()
{
    string rook_A;
    string rook_B;
 
    cin >> rook_A >> rook_B;
 
    if(rook_A[0]==rook_B[0] || rook_A[1]==rook_B[1]) cout << "TAK\n";
    else cout << "NIE\n";
 
    return 0;
}
