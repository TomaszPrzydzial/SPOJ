#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct PIECE
{
    char figure;
    char file;
    char row;
};
 
struct sort_key
{
    inline bool operator() (const PIECE& piece1, const PIECE& piece2)
    {
        if(piece1.figure!=piece2.figure) return(piece1.figure < piece2.figure);
        else if(piece1.file!=piece2.file) return(piece1.file < piece2.file);
        else return(piece1.row < piece2.row);
    }
};
 
void add_pieces(int quantity, vector<PIECE> &pieces, char chessboard[8][8])
{
    for(int i=0; i<quantity; i++)
    {
        PIECE piece;
        cin >> piece.figure >> piece.file >> piece.row;
 
        pieces.push_back(piece);
        chessboard[piece.row-49][piece.file-97]=piece.figure;
    }
 
     sort(pieces.begin(), pieces.end(), sort_key());
}
 
void print_pieces(vector<PIECE> pieces)
{
     for(int i=0; i<pieces.size(); i++)
     {
         cout << pieces[i].figure << " " << pieces[i].file << pieces[i].row << endl;
     }
 
     cout << endl;
}
 
void clear_chessboard(char chessboard[8][8])
{
    for(int i=0; i<8; i++)
    {
        for(int k=0; k<8; k++)
        {
            chessboard[i][k]='0';
        }
    }
}
 
void print_chessboard(char chessboard[8][8])
{
    for(int i=7; i>=0; i--)
    {
        for(int k=0; k<8; k++)
        {
            cout << chessboard[i][k];
        }
        cout << endl;
    }
}
 
 
int main()
{
    int a, b;
    cin >> a >> b;
 
    vector<PIECE> pieces_A;
    vector<PIECE> pieces_B;
 
    char chessboard_A[8][8];
    char chessboard_B[8][8];
 
    clear_chessboard(chessboard_A);
    clear_chessboard(chessboard_B);
 
    add_pieces(a, pieces_A, chessboard_A);
    add_pieces(b, pieces_B, chessboard_B);
 
    print_chessboard(chessboard_B);
    print_pieces(pieces_B);
 
    print_chessboard(chessboard_A);
    print_pieces(pieces_A);
 
    return 0;
}
