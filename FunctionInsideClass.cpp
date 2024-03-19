#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    /*  Person(string nm, int ag, int mk1, int mk2)
     {
         name = nm;
         age = ag;
         marks1 = mk1;
         marks2 = mk2;
     } */
    Person(string name, int age, int marks1, int marks2)
    {
        /* (*this).name = name;
        (*this).age = age;
        (*this).marks1 = marks1;
        (*this).marks2 = marks2; */
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }

    int total()
    {
        return marks1 + marks2;
    }
    /*  void hello()
     {
         cout << "Hello inside function" << endl;
     } */
    void hello()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    Person per1("Abul khan", 23, 45, 45);
    cout << per1.name << " " << per1.age << " " << per1.total() << endl;
    per1.hello();
    return 0;
}