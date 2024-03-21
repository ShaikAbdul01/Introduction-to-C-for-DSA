#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    /*   for (int i = s.size(); i >= 0; i--)
      {
          cout << s[i];
      } */
    int flag = 1;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (flag)
        {
            cout << word;
            flag = 0;
        }
        else
        {
            cout << " " << word;
        }
    }

    return 0;
}