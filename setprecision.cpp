#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    // printf("%0.2lf", a);
    cout << fixed << setprecision(2) << a << endl;
}