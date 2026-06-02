#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef long long int ll;
using namespace std;

// Function to calculate gcd
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    fast();
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        ll count = 0;

        // Iterate over all possible starting points
        for (int start = l; start <= r; ++start)
        {
            int current = start;

            // Extend the segment as long as GCD(start, current) = 1
            while (current <= r && gcd(start, current) == 1)
            {
                count++;
                current++;
            }
        }

        // Output the result for this test case
        cout << count << '\n';
    }

    return 0;
}
