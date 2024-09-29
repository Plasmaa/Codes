#include <bits/stdc++.h>

using namespace std;

vector<int> primeFactors(int n)
{
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        factors.push_back(n);
    }
    return factors;
}

int findMinBulbs(int k)
{
    vector<int> factors = primeFactors(k);
    vector<int> exponents(factors.size(), 0);
    int product = 1;

    while (product < k)
    {
        int minIndex = 0;
        for (int i = 1; i < factors.size(); ++i)
        {
            if (exponents[i] < exponents[minIndex])
            {
                minIndex = i;
            }
        }
        exponents[minIndex]++;
        product *= factors[minIndex];
    }

    int n = 1;
    for (int i = 0; i < factors.size(); ++i)
    {
        n *= pow(factors[i], exponents[i]);
    }
    return n;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;
        int n = findMinBulbs(k);
        cout << n << endl;
    }

    return 0;
}