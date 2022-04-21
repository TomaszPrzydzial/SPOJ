#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    float av_m16, av_k16, av_m36, av_k36;
    cin >> av_m16 >> av_k16 >> av_m36 >> av_k36;
 
    int q_m16, q_k16, q_m36, q_k36;
    cin >> q_m16 >> q_k16 >> q_m36 >> q_k36;
 
    cout << "K16K36: " << fixed << setprecision(2) << (av_k16*q_k16+av_k36*q_k36)/(q_k16+q_k36) << endl;
    cout << "M16M36: " << fixed << setprecision(2) << (av_m16*q_m16+av_m36*q_m36)/(q_m16+q_m36) << endl;
    cout << "M16K16M36K36: " << fixed << setprecision(2) << (av_k16*q_k16+av_k36*q_k36+av_m16*q_m16+av_m36*q_m36)/(q_k16+q_k36+q_m16+q_m36) << endl;
 
    return 0;
}
