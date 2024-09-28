#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char a[n];

    cin >> a;

    int zero = 0, one = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '0')
            zero++;
        else if (a[i] == '1')
            one++;
    }

    if (zero > one)
        cout << zero - one;
    else if (zero < one)
        cout
            << one - zero;
    else
        cout << 0;

    return 0;
}