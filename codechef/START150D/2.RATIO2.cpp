#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if ((x / y) >= 2 || (y / x) >= 2)
        {
            cout << 0 << endl;
        }
        else if (x > y)
        {
            int mul = x * 2;
            int div = (x + 1) / 2;
            cout << min(mul - y, y - div) << endl;
        }
        else if (y > x)
        {
            int mul = y * 2;
            int div = (y + 1) / 2;
            cout << min(mul - x, x - div) << endl;
        }
        else if (x == y)
        {
            cout << x / 2 << endl;
        }
    }

    return 0;
}
