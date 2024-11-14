/*
link - https://codeforces.com/contest/368/problem/B
*/

#include <bits/stdc++.h>
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef long long int ll;
using namespace std;

int main()
{
    fast();

    int n, m;
    cin >> n >> m;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> gg;
    vector<int> count(n + 1);

    for (int i = n; i > 0; i--)
    {
        gg.insert(a[i]);
        count[i] = gg.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;

        cout << count[pos] << endl;
    }

    return 0;
}