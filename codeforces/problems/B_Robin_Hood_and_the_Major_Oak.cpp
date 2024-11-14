#include <bits/stdc++.h>
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef long long int ll;
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            ans = k / 2;
        }
        else
        {
            ans = ceil(1.0 * k / 2);
        }

        cout << (ans % 2 == 0 ? "YES" : "NO") << "\n";
    }
}

int main()
{
    fast();

    solve();

    return 0;
}