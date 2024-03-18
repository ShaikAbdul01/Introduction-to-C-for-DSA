#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout<<s;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << " ";
    }

    return 0;
}