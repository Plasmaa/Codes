#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

// bool isPowerOfTwoLog(int n)
// {
//     if (n <= 0)
//         return false;
//     double logVal = log2(n);
//     return floor(logVal) == logVal; // Check if log2(n) is an integer
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << __builtin_popcount(n);
    return 0;

    // if (isPowerOfTwo(x) && x != 2)
    // {
    //     cout << 1;
    // }
    // else if (!isPowerOfTwo(x))
    // {
    //     cout << floor(log2(x)) + 1;
    // }
    // else
    // {
    //     cout << 2;
    // }

    return 0;
}