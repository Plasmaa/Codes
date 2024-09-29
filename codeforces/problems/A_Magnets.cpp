#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ct(0);
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        if (a[i] != a[i - 1])
            ct++;
    }
    cout << ct;
}