#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 400000

ll i, j, k, n, m, t, d, res, w[N + 50];
set<pair<ll, ll>> s;
vector<tuple<ll, ll, ll>> v;

void upd(ll sb)
{
    ll cur = sb, i, j, k;
    while (!s.empty())
    {
        auto [x, y] = *s.rbegin();
        k = min(cur, w[y]);
        cur -= k;
        w[y] -= k;
        if (!w[y])
            s.erase({x, y});
        else
            break;
    }
    res += (sb - cur) / m;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> d;
        s = {};
        v = {};
        for (i = 1; i <= n; i++)
        {
            cin >> j >> w[i];
            v.push_back({j, i, 1});
            v.push_back({j + d, i, -1});
        }
        sort(v.begin(), v.end());
        ll lst = 0;
        res = 0;
        for (auto [ti, x, op] : v)
        {
            upd((ti - lst) * m);
            lst = ti;
            if (op == -1)
                s.erase({ti - d, x});
            else
                s.insert({ti, x});
        }
        cout << res << '\n';
    }
}