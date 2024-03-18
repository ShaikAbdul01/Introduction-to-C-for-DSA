#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* //c
    char a[10] = "Hello";
    char b[10] = "Gello";
    strcpy(a, b);
    cout << a; */

    /*
    //c++
     string s = "Hello";
    s = "gello";
    cout << s << endl; */

    string s1 = "Hello";
    string s2 = "gello";

    // if(strcmp(s1,s2)==0)//c te aivabe check kora hoy

    if (s1 == s2)
    {
        cout << "Same";
    }
    else
    {
        cout << "NOT Same";
    }
    return 0;
}