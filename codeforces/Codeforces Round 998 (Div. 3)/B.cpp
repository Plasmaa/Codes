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

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> decks(n, vector<int>(m));
        vector<pair<int, int>> cows;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> decks[i][j];
            }
            sort(decks[i].begin(), decks[i].end());
            cows.push_back({decks[i][0], i});
        }

        sort(cows.begin(), cows.end());
        vector<int> order;
        for (auto &cow : cows)
        {
            order.push_back(cow.second);
        }

        int top = -1;
        bool valid = true;

        for (int round = 0; round < m && valid; round++)
        {
            for (int i = 0; i < n; i++)
            {
                int cow = order[i];
                auto it = upper_bound(decks[cow].begin(), decks[cow].end(), top);
                if (it != decks[cow].end())
                {
                    top = *it;
                    decks[cow].erase(it);
                }
                else
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << order[i] + 1 << " ";
            }
            cout << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}
