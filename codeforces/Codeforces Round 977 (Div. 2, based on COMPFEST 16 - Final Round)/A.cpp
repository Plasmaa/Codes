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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (a.size() > 1)
        {
            sort(all(a));

            int min1 = a[0];
            int min2 = a[1];

            a.erase(a.begin());
            a.erase(a.begin());

            int avg = (min1 + min2) / 2;

            a.push_back(avg);
        }
        cout << a[0] << "\n";
    }

    return 0;
}
