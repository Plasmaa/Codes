#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    char a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int antik = 0;
    int danik = 0;

    for (auto it : a)
    {
        if (it == 'A')
            antik++;
        else if (it == 'D')
            danik++;
    }

    if (antik > danik)
        cout << "Anton";
    else if (danik > antik)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}