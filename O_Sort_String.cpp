#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[101];
    cin >> s;
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = s[i] - 'a';
        count[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            char ch = i + 97;
            cout << ch;
        }
    }
    return 0;
}
