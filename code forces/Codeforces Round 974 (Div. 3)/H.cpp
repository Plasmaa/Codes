#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 1000000

ll i, j, k, n, m, t, d, res, w[N + 50], a[N + 50];

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (i = 1; i <= N; i++)
        w[i] = rng();
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (i = 1; i <= n; i++)
        {
            cin >> k;
            a[i] = (a[i - 1] ^ w[k]);
        }
        while (m--)
        {
            cin >> i >> j;
            if (a[i - 1] == a[j])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}