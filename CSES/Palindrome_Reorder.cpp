/*
    link - https://cses.fi/problemset/task/1755/
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

    string s;
    getline(cin, s);

    map<char, int> cnt;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        cnt[s[i]]++;
    }
    int oddcnt = 0;
    for (auto [key, occ] : cnt)
    {
        if (occ % 2 != 0)
        {
            oddcnt++;
        }
    }
    if (oddcnt > 1)
    {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }

    string first, middle, last;
    for (auto [key, occ] : cnt)
    {
        if (occ % 2 != 0)
        {
            for (int i = 1; i <= occ; i++)
            {
                middle.push_back(key);
            }
        }
        else
        {
            for (int i = 1; i <= (occ / 2); i++)
            {
                first.push_back(key);
                last.push_back(key);
            }
        }
        // cout << x << " " << y << "\n";
    }

    reverse(last.begin(), last.end());
    string ans = first + middle + last;

    cout << ans << endl;

    return 0;
}