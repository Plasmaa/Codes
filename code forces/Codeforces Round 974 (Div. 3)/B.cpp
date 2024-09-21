#include <bits/stdc++.h>
using namespace std;
long long t, n, k, cnt;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k % 2 == 0 || n % 2 == 0)
            cnt = k / 2;
        else
            cnt = k / 2 + 1;
        cout << (cnt % 2 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}