#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student *rahim = new Student(34,3,23.45);
    cout << rahim->roll << " " << rahim->cls << " " << rahim->gpa << endl;
    return 0;
}