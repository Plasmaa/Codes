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
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        bool f = true;
        long long prefix = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            long long diff = a[i] - prefix;
            if (diff > a[i + 1])
            {
                f = false;
                break;
            }
            prefix = max(0LL, prefix - a[i]);
            a[i + 1] -= diff;
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}