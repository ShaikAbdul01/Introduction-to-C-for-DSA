#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int a, b;
    cin >> a >> s >> b;
    if (s == '>')
    {
        if (a > b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (s == '<')
    {
        if (a < b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (s == '=')
    {
        if (a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}