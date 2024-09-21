#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0, ind, x, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        if (n <= 2)
            cout << -1;
        else
        {
            sort(arr, arr + n);
            for (i = 0; i < n; i++)
                sum = sum + arr[i];
            ind = n / 2 + 1;
            x = 2 * arr[ind - 1] * n - sum + 1;
            if (x >= 0)
                cout << x;
            else
                cout << 0;
        }
        cout << endl;
    }
}