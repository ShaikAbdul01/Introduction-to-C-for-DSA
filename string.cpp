#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    /* string s;
    cin >> s;
    cout << s; */

    /* char s[100];
    cin >> s;
    cout << s << " " << strlen(s); */

    char s[100];
    int n;
    cin >> n;
    getchar();
    // fgets(s, 100, stdin);
    cin.getline(s, 100);
    cout << n << endl;
    cout << s << endl;
}