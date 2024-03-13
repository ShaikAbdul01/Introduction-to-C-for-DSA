#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b;

    /* a.roll = 56;
    a.cgpa = 32.12;
    char tmp[100]="rakib";
    strcpy(a.name,tmp);
    cout << a.name << " " << a.roll << " " << a.cgpa << endl; */

    /* cin >> a.name >> a.roll >> a.cgpa;//rakib 34 23.32
    cout << a.name << " " << a.roll << " " << a.cgpa << endl; */

    /* cin.getline(a.name,100);//rakib khan
    cin >> a.roll >> a.cgpa;//34 23.32
    cout << a.name << " " << a.roll << " " << a.cgpa << endl; */

    cin.getline(a.name, 100); // rakib khan
    cin >> a.roll >> a.cgpa;  // 34 23.32
    getchar();
    cin.getline(b.name, 100); // sakib khan
    cin >> b.roll >> b.cgpa;  // 53 34.23
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}