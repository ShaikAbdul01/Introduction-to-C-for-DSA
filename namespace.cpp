#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age1 = 35;
    void rakib()
    {
        cout << "Rakib namespace" << endl;
    }
}
namespace Sakib
{
    int age2 = 36;
    void sakib()
    {
        cout << "Sakib namespace" << endl;
    }
}
using namespace Rakib;
using namespace Sakib;

int main()
{
    /* cout << Rakib::age1 << endl;
    cout << Sakib::age2 << endl; */

    cout<<age1<<endl;
    cout<<age2<<endl;
    sakib();
    return 0;
}