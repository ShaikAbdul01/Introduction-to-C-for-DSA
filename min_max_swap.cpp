#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // cout << min(a, b) << " " << max(a, b) << endl;
    // cout << min({a, b, c, d}) << " " << max({a, b, c, d}) << endl;

    swap(a, b);
    cout << a << " " << b << endl;
}