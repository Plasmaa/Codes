#include <bits/stdc++.h>
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef long long int ll;
using namespace std;

int main()
{
    fast();

    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        set<int> possible_a3;

        possible_a3.insert(a1 + a2);

        possible_a3.insert(a4 - a2);

        possible_a3.insert(a5 - a4);

        int max_fibonacciness = 0;

        for (int a3 : possible_a3)
        {
            int fibonacciness = 0;

            if (a1 + a2 == a3)
                fibonacciness++;
            if (a2 + a3 == a4)
                fibonacciness++;
            if (a3 + a4 == a5)
                fibonacciness++;

            max_fibonacciness = max(max_fibonacciness, fibonacciness);
        }
        cout << max_fibonacciness << endl;
    }

    return 0;
}