#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int c = 0;

        bool a = true;

        while (x != 0 || y != 0)
        {
            if (a == true)
            {
                int c = min(k, abs(x));
                if (x > 0)
                    x -= c;
                else
                    x += c;
                a = false;
            }
            else
            {
                int c = min(k, abs(y));
                if (y > 0)
                    y -= c;
                else
                    y += c;
                a = true;
            }
            c++;
        }

        cout << c << endl;
    }

    return 0;
}
