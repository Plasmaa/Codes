#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int max_power = 61;
vector<long long int> powers[max_power];

void precompute_powers()
{
    for (int k = 2; k < max_power; k++)
    {
        long long int power = 1;
        while (power <= 1e9)
        {
            powers[k].push_back(power);
            if (power > 1e9 / k)
                break;
            power *= k;
        }
    }
}

int main()
{
    fast();
    precompute_powers();

    int t;
    cin >> t;

    while (t--)
    {
        long long int n, k;
        cin >> n >> k;

        int operation = 0;

        if (k == 1)
        {
            cout << n << endl;
            continue;
        }

        for (int i = powers[k].size() - 1; i >= 0 && n > 0; i--)
        {
            while (n >= powers[k][i])
            {
                n -= powers[k][i];
                operation++;
            }
        }

        cout << operation << endl;
    }

    return 0;
}
