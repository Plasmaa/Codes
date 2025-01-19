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
        int n, k;
        cin >> n >> k;

        vector<int> nums(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
            freq[nums[i]]++;
        }

        int score = 0;

        for (auto &[num, count] : freq)
        {
            int f = k - num;
            if (freq.count(f))
            {
                if (num == f)
                {
                    score += count / 2;
                    freq[num] = 0;
                }
                else
                {
                    int pairs = min(count, freq[f]);
                    score += pairs;
                    freq[num] -= pairs;
                    freq[f] -= pairs;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}