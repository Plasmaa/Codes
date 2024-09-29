#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
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
            cin >> a[i];

        int score = 0;

        for (int i = 0; i < 2; i++)
        {
            int cur_max = 0;
            int c = 0;
            int prev_max = 0;

            for (int j = i; j < n; j += 2)
            {
                c++;
                prev_max = max(prev_max, a[j]);
            }

            cur_max = prev_max + c;

            score = max(score, cur_max);
        }

        cout << score << endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

void run()
{
    int n;
    cin >> n;
    int ans = 0, x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ans = max(ans, x + (((i % 2) + n) / 2));
    }
    cout << ans << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        run();
    }
}

*/
