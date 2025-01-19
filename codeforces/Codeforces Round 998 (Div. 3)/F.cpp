#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_K = 100005;
const int LIMIT_N = 1000;

// Modular addition
int modAdd(int a, int b)
{
    return (a + b) % MOD;
}

// Modular multiplication
int modMul(int a, int b)
{
    return (1LL * a * b) % MOD;
}

// Modular exponentiation
int modExp(int base, long long exp)
{
    int res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = modMul(res, base);
        base = modMul(base, base);
        exp /= 2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    vector<pair<int, long long>> queries(t);
    int max_k = 0;

    // Input queries
    for (int i = 0; i < t; i++)
    {
        int k;
        long long n;
        cin >> k >> n;
        queries[i] = {k, n};
        max_k = max(max_k, k);
    }

    // Precompute results for n <= LIMIT_N
    vector<vector<int>> dp(LIMIT_N + 1, vector<int>(max_k + 1, 0));
    vector<int> baseCount(max_k + 1, 0);

    for (int z = 1; z <= max_k; z++)
    {
        dp[1][z] = 1; // Single element arrays
    }

    for (int length = 2; length <= LIMIT_N; length++)
    {
        for (int z = 1; z <= max_k; z++)
        {
            for (int mult = z; mult <= max_k; mult += z)
            {
                dp[length][mult] = modAdd(dp[length][mult], dp[length - 1][z]);
            }
        }
    }

    // Aggregate results for each z up to LIMIT_N
    for (int z = 1; z <= max_k; z++)
    {
        for (int length = 1; length <= LIMIT_N; length++)
        {
            baseCount[z] = modAdd(baseCount[z], dp[length][z]);
        }
    }

    // Process each query
    for (auto &[k, n] : queries)
    {
        vector<int> result(k + 1, 0);

        for (int z = 1; z <= k; z++)
        {
            if (n <= LIMIT_N)
            {
                result[z] = baseCount[z];
            }
            else
            {
                // Use modular exponentiation for lengths > LIMIT_N
                int total = baseCount[z];
                int multiplier = dp[LIMIT_N][z];
                long long remainingLength = n - LIMIT_N;

                total = modAdd(total, modMul(multiplier, modExp(multiplier, remainingLength)));
                result[z] = total;
            }
        }

        // Output result for this query
        for (int z = 1; z <= k; z++)
        {
            cout << result[z] << " ";
        }
        cout << '\n';
    }

    return 0;
}
