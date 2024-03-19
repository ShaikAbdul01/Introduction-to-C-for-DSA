#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin>>s;
    getline(cin, s);
    // provide index
    /* for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    } */

    // Not support normal array or char array only support for string.this loop can't provide index.
    for (char ch : s)
    {
        cout << ch;
    }
    return 0;
}