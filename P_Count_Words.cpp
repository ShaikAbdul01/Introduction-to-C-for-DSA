#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  int cnt = 0;
  bool inside_word = false;
  for (char c : s)
  {
    if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z')
    {
      if (inside_word == false)
      {
        cnt++;
      }
      inside_word = true;
    }
    else
    {
      inside_word = false;
    }
  }
  cout << cnt << endl;
  return 0;
}
