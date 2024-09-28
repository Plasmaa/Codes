#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n, m, a;

    cin >> n >> m >> a;

    long long int Length = ceil(static_cast<double>(n) / a);
    long long int Width = ceil(static_cast<double>(m) / a);

    long long int totalFlagstones = Length * Width;

    cout<< totalFlagstones;

    return 0;
}
