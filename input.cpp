#include <iostream>
using namespace std;
int main()
{
    int a;
    long long int b;
    cin >> a >> b;
    // cout << a << " " << b << endl;

    // typecasing
    char c;
    // cin >> c;
    // cout << int(c) << endl;
    cout << char(a) << " " << (long long int)(a) << " " << double(b) << endl;

    return 0;
}