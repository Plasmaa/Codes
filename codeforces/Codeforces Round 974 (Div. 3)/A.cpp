#include <bits/stdc++.h>
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fast();

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        int robin_money = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= k)
            {
                robin_money += a[i];
            }
            else if (a[i] == 0 && robin_money != 0)
            {
                robin_money--;
                count++;
            }
        }
        cout << count << "\n";
    }
}