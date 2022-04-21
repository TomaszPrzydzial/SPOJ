#include <iostream>
#include <vector>
 
using namespace std;
 
pair<int, int> knight_moves[] = {{1,2}, {2,1}, {2,-1}, {1,-2}, {-1, -2}, {-2,-1}, {-2,1}, {-1,2}};
 
bool is_field_valid(pair<char, char> field_position)
{
    return ((field_position.first>='a' && field_position.first<='h')
    && (field_position.second>='1' && field_position.second<='8'));
}
 
class Knight
{
 
public:
 
    pair<char, char> position;
    vector<pair<char, char>> moves;
 
    Knight(char x, char y)
    {
        position=make_pair(x, y);
    }
 
    void CalculateMoves()
    {
        for(int i=0; i<8; i++)
        {
            pair<char, char> new_move = position;
            new_move.first+=knight_moves[i].first;
            new_move.second+=knight_moves[i].second;
 
            if(is_field_valid(new_move)) moves.push_back(new_move);
        }
    }
 
    void Print_moves()
    {
        for(int i=0; i<moves.size(); i++)
        {
            cout << moves[i].first << moves[i].second << endl;
        }
    }
 
    bool Possible_attack(char x, char y)
    {
        for(int i=0; i<moves.size(); i++)
        {
            if(moves[i].first==x && moves[i].second==y) return true;
        }
 
        return false;
    }
};
 
int main()
{
    string kn_A, kn_B;
    cin >> kn_A >> kn_B;
 
    Knight knight_A(kn_A[0], kn_A[1]);
    knight_A.CalculateMoves();
 
    if(knight_A.Possible_attack(kn_B[0], kn_B[1])) cout << "TAK\n";
    else cout << "NIE\n";
 
    return 0;
}
