#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    // type 1
    /* Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    } */
    // type 2
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(34, 3, 23.45);
    Student karim(4, 2, 54.23);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}