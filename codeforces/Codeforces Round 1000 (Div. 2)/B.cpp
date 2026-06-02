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
        int n, l, r;
        cin >> n >> l >> r;
        l--;
        r--; // 0-based indexing
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Step 1: Calculate the initial sum of the range [l, r]
        ll sum_in_range = 0;
        for (int i = l; i <= r; i++)
        {
            sum_in_range += a[i];
        }

        // Step 2: Find the smallest values outside the range [l, r]
        vector<int> outside_values;
        for (int i = 0; i < l; i++)
        {
            outside_values.push_back(a[i]);
        }
        for (int i = r + 1; i < n; i++)
        {
            outside_values.push_back(a[i]);
        }

        // Step 3: Sort the outside values to find the smallest ones
        sort(all(outside_values));

        // Step 4: Replace the largest values in the range with the smallest outside values
        int outside_index = 0;
        for (int i = l; i <= r; i++)
        {
            if (outside_index < outside_values.size())
            {
                sum_in_range -= a[i];
                sum_in_range += outside_values[outside_index];
                outside_index++;
            }
        }

        // Output the result
        cout << sum_in_range << '\n';
    }
    return 0;
}
