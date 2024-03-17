#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        int possible = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                int currentSum = a[i] + a[left] + a[right];
                if (currentSum == s)
                {
                    possible = 1;
                    break;
                }
                else if (currentSum < s)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
