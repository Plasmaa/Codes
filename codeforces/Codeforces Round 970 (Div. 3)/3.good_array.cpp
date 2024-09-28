#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int c = 0;
        int dif = 0;
        while (l <= r)
        {
            l = l + 1 + dif;
            dif++;
            c++;
        }
        cout << c << endl;
    }

    return 0;
}