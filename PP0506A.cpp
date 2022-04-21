#include <iostream>
#include <math.h>
#include <vector>
 
using namespace std;
 
 
class Point
{
private:
    string name;
    short int x_pos;
    short int y_pos;
    double distance;
 
public:
    void create(string n, short int x, short int y)
    {
        name=n;
        x_pos=x;
        y_pos=y;
 
        calculate_distance();
    }
 
    void show_info()
    {
        cout << name << " " << x_pos << " " << y_pos << endl;
    }
 
    void calculate_distance()
    {
        double xx = (double)x_pos;
        double yy = (double)y_pos;
 
        distance=sqrt(pow(abs(yy), 2)+pow(abs(xx), 2));
    }
 
    double get_distance()
    {
        return distance;
    }
};
 
void show_all_points(Point *points_first, int length)
{
    for(int i=0; i<length; i++)
    {
       (*(points_first+i)).show_info();
    }
}
 
void sort_points(Point *points_first, vector <Point> *vector_point_start, int length)
{
    vector <Point> sorted_tab;
    Point *sorted_first;
 
    int highest_point_index;
 
    while((*vector_point_start).size()!=0)
    {
        double highest_distance=-1;
 
        for(int i=0; i<length; i++)
        {
            double actual_point_distance=(*(points_first+i)).get_distance();
 
            if(actual_point_distance>highest_distance)
            {
                highest_distance = actual_point_distance;
                highest_point_index = i;
            }
        }
 
        length--;
        sorted_tab.push_back((*(points_first+highest_point_index)));
        (*vector_point_start).erase((*vector_point_start).begin()+highest_point_index);
    }
 
    //show sorted
 
    for(int i=sorted_tab.size()-1; i>=0; i--)
    {
       sorted_tab[i].show_info();
    }
}
 
 
int main()
{
    unsigned short int tests;
 
    cin >> tests;
 
    while(tests--)
    {
        unsigned short int points_quantity;
 
        cin >> points_quantity;
 
        vector <Point> points_tab;
        Point *points_first;
        vector <Point> *vector_point_begin=&points_tab;
 
        for(int i=0; i<points_quantity; i++)
        {
            string name;
            short int x, y;
 
            cin >> name >> x >> y;
 
            Point new_point;
            new_point.create(name, x, y);
 
            points_tab.push_back(new_point);
 
            points_first = &points_tab[0];
        }
 
        //show_all_points(points_first, points_quantity);
 
        sort_points(points_first, vector_point_begin, points_quantity);
    }
 
    return 0;
}
