#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 400000

ll i, j, k, n, m, t, ma[N + 50];
ll dis[3][N + 50];
ll f[N + 50][2], vis[N + 50][2], res;

vector<pair<ll, ll>> v[N + 50];

void fuck(int id, ll pos)
{
    for (i = 1; i <= n; i++)
    {
        f[i][0] = f[i][1] = dis[id][i] = 1e18;
        vis[i][0] = vis[i][1] = 0;
    }
    priority_queue<tuple<ll, ll, ll>> q;
    f[pos][ma[pos]] = 0;
    dis[id][pos] = 0;
    q.push({0, pos, ma[pos]});
    while (!q.empty())
    {
        auto [w, x, y] = q.top();
        q.pop();
        w = -w;
        if (vis[x][y])
            continue;
        dis[id][x] = min(dis[id][x], w);
        vis[x][y] = 1;
        // cout<<"NMSL "<<pos<<' '<<x<<' '<<y<<' '<<w<<endl;

        for (auto [i, j] : v[x])
        {
            ll t1 = w + j / (1 + y), t2 = (y | (ma[i]));
            if (vis[i][t2] || t1 >= f[i][t2])
                continue;
            f[i][t2] = t1;
            q.push({-t1, i, t2});
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        for (i = 1; i <= k; i++)
        {
            cin >> j;
            ma[j] = 1;
        }
        while (m--)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            v[x].push_back({y, z});
            v[y].push_back({x, z});
        }
        fuck(1, 1);
        fuck(2, n);
        res = 1e18;
        for (i = 1; i <= n; i++)
        {
            res = min(res, max(dis[1][i], dis[2][i]));
        }
        if (res > 1e17)
            res = -1;
        cout << res << '\n';

        for (i = 1; i <= n; i++)
        {
            v[i] = {};
            ma[i] = 0;
        }
    }
}