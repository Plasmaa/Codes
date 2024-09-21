#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>coins(n);
    int total = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
        total += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>()); // sorting in non increasing order for vector

    int myCoins = 0;
    int myTotal = 0;

    for (int i = 0; i < n; ++i)
    {
        myCoins++;
        myTotal += coins[i];
        if (myTotal > total - myTotal)
        {
            break;
        }
    }

    cout << myCoins << endl;

    return 0;
}
