#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    *a = 10;
    cout << "Fun: " << a << endl;
    return a;
}
int main()
{
    /* int *a = new int;
    *a = 10;
    cout << *a << endl;

    float *f = new float;
    *f = 34.54635;
    cout << *f << endl; */

    int *p = fun();
    cout << "Main: " << p << endl;
    return 0;
}