#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // string::iterator it;
    /* for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    } */

    // cout << *s.begin() << " " << *(s.end() - 1) << endl;

    /*   for(string::iterator it=s.begin();it<s.end();it++){
          cout<<*it;
      } */
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it;
    }
    return 0;
}