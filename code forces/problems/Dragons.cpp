#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i].first >> x[i].second;
    }

    sort(x.begin(), x.end());

    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (x[i].first < s)
        {
            s += x[i].second;
        }
        else
        {
            f++;
            break;
        }
    }

    if (f == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
