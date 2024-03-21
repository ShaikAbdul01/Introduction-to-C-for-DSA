#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (((s[i] - 48) + (s[i + 1] - 48) + (s[i + 2] - 48)) == ((s[i + 3] - 48) + (s[i + 4] - 48) + (s[i + 5] - 48)))
            {
                flag = 1;
            }
            // cout<<s[i]-48;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}