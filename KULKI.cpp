#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
 
using namespace std;
 
class Bowl
{
public:
    int x, y, r;
 
    Bowl(int x, int y, int r)
    {
        this->x = x;
        this->y = y;
        this->r = r;
    }
 
    bool CalculateTry(int try_x, int try_y)
    {
        float dist_x, dist_y, distance;
 
        dist_x = abs((float)x-(float)try_x);
        dist_y = abs((float)y-(float)try_y);
 
        distance = sqrt(pow(dist_x, 2)+pow(dist_y, 2));
 
        if(distance<=r) return true;
        else return false;
    }
};
 
class Player
{
public:
 
    string name;
    int points;
 
    Player(string name)
    {
        this->name = name;
        this->points = 0;
    }
 
    void AddPoint()
    {
        points++;
    }
};
 
struct is_better
{
    inline bool operator() (const Player& player1, const Player& player2)
    {
        if(player1.points>player2.points) return true;
        else return false;
    }
};
 
int main()
{
    int bowl_x, bowl_y, bowl_r, tries, players;
    cin >> bowl_x >> bowl_y >> bowl_r >> tries >> players;
 
    Bowl *bowl = new Bowl(bowl_x, bowl_y, bowl_r);
 
    vector<Player> all_players;
 
    while(players--)
    {
        string name;
        cin >> name;
 
        Player *player = new Player(name);
 
        for(int i=0; i<tries; i++)
        {
            int x, y;
            cin >> x >> y;
 
            if(bowl->CalculateTry(x, y)) player->AddPoint();
        }
 
        all_players.push_back(*player);
        delete player;
    }
 
    sort(all_players.begin(), all_players.end(), is_better());
 
    cout << all_players[0].name << " " << all_players[0].points << endl;
 
    return 0;
}
