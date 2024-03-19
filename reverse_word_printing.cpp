#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss);
        cout << word << " ";
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    /* string word;
      while (ss >> word)
     {
         cout << word;
     } */
    print(ss);
    // cout<<ss;
    return 0;
}