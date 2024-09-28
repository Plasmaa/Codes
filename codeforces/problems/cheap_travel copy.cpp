#include <bits/stdc++.h>

using namespace std;

// a --> number of ride she will go
// b --> multiple number of ticket
// c --> price of 1 ticket
// d --> price of m ticket

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a * c, (a / b) * d + min((a % b) * c, d));

    // int n, m, a, b;
    // cin >> n >> m >> a >> b;

    // int min_price = 0;

    // float z = b / m;
    // if (a == z || a < z)
    // {
    //     min_price = n * a;
    // }
    // else
    // {
    //     min_price =
    // }

    // cout << min_price << endl;

    return 0;
}