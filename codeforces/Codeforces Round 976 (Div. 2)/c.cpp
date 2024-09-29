#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fast();
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        long long b, c, d;
        cin >> b >> c >> d;

        long long a = 0;
        bool possible = true;

        for (int i = 0; i < 62; ++i)
        {
            int bit_b = (b >> i) & 1;
            int bit_c = (c >> i) & 1;
            int bit_d = (d >> i) & 1;

            if (bit_d == 1)
            {
                // We need (a | b) = 1
                if (bit_b == 1 || bit_c == 1)
                {
                    // Either b or c has a 1, so a can be 0 or 1
                    a |= (0 << i); // a can be 0 for this bit
                }
                else
                {
                    // Both b and c are 0, so a must be 1
                    a |= (1 << i);
                }
            }
            else
            {
                // We need (a | b) = 0
                if (bit_b == 1 || bit_c == 1)
                {
                    // Either b or c is 1, so a must be 0
                    a &= ~(1 << i);
                }
            }
        }

        if (possible)
        {
            cout << a << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}