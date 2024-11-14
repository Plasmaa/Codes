#include <bits/stdc++.h>
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef long long int ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n + 1);

    if (n % 2 != 0)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;
    }

    for (int i = 1; i < n; i += 2)
    {
        swap(p[i], p[i + 1]);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }
}
int main()
{
    fast();

    solve();

    return 0;
}