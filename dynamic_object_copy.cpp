#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("Rakib khan", 34);
    Person *sakib = new Person("Sakib khan", 64);

    // rakib = sakib;//not perfer

    // rakib->name=sakib->name;
    // rakib->age=sakib->age;

    *rakib = *sakib; // must perferble
    delete sakib;

    cout << rakib->name << " " << rakib->age;
    return 0;
}