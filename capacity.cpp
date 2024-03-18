#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* string s = "Hello World";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl; */

    /* string a = "Hello Bangladesh";
    cout << a.capacity() << endl;
    cout << a.size() << endl;
    a.clear();
    cout<<a<<endl; */

    /*  // string s;
     string s="Hello";
     if (s.empty() == true)
         cout << "Empty" << endl;
     else
         cout << "Not Empty" << endl; */

    string s;
    cin >> s;
    s.resize(8);
    cout << s << endl;
    s.resize(14, 'S');
    cout << s << endl;
    return 0;
}