#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;

    Student(int id, string name, char section, int marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int id1, id2, id3;
        string name1, name2, name3;
        char section1, section2, section3;
        int marks1, marks2, marks3;
        cin >> id1 >> name1 >> section1 >> marks1;
        cin >> id2 >> name2 >> section2 >> marks2;
        cin >> id3 >> name3 >> section3 >> marks3;
        Student std1(id1, name1, section1, marks1);
        Student std2(id2, name2, section2, marks2);
        Student std3(id3, name3, section3, marks3);

        if (std1.marks >= std2.marks && std1.marks >= std3.marks)
        {
            cout << id1 << " " << name1 << " " << section1 << " " << marks1 << endl;
        }
        else if (std2.marks >= std1.marks && std2.marks >= std3.marks)
        {
            cout << id2 << " " << name2 << " " << section2 << " " << marks2 << endl;
        }
        else
        {
            cout << id3 << " " << name3 << " " << section3 << " " << marks3 << endl;
        }
    }

    return 0;
}