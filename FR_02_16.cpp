#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
class Student
{
    public:
        int id;
        int year;
        int month;
        int day;
 
    Student(int i, int y, int m, int d)
    {
        id=i;
        year=y;
        month=m;
        day=d;
    }
};
 
bool CompareStudents(Student A, Student B)
{
    if(A.year != B.year) return A.year < B.year;
    else if(A.month != B.month) return A.month < B.month;
    else if(A.day != B.day) return A.day < B.day;
    else return A.id < B.id;
}
 
int main()
{
    int tests;
    cin >> tests;
 
    while(tests--)
    {
        vector <Student> student_list;
 
        int students;
        cin >> students;
 
        while(students--)
        {
            int student_id;
            string birthday;
            cin >> student_id >> birthday;
 
            student_list.push_back(Student(student_id, stoi(birthday.substr(0, 4)), stoi(birthday.substr(5, 2)), stoi(birthday.substr(8, 2))));
        }
 
        sort(student_list.begin(), student_list.end(), &CompareStudents);
 
        for(int i=0; i<student_list.size(); i++)
        {
            cout << student_list[i].id << " ";
        }
 
    }
 
    return 0;
}
