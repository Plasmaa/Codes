#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 5][2];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            arr[x][y]++;
        }
        long long res = 0;
        for (int i = 0; i <= n; i++)
        {
            if (arr[i][0] && arr[i][1])
            {
                res += (n - 2) * 1LL;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if (arr[i][0] && arr[i + 1][1] && arr[i + 2][0])
                res++;
            if (arr[i][1] && arr[i + 1][0] && arr[i + 2][1])
                res++;
        }

        cout << res << endl;
    }
}