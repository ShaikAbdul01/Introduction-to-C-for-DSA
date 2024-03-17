#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    char name[100];
    Student(int roll, int cls, double gpa, char name[])
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        strcpy(this->name, name);
    }
};
int main()
{
    int roll, cls;
    double gpa;
    char name[100];

    cin >> roll >> cls >> gpa;
    cin.ignore();
    cin.getline(name, 100);
    Student *rahim = new Student(roll, cls, gpa, name);
    cout << rahim->roll << " " << rahim->cls << " " << rahim->gpa << " " << rahim->name << endl;
    delete rahim;
    return 0;
}