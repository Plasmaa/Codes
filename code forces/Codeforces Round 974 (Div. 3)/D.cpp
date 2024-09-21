#include <algorithm>
#include <iostream>
signed main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, d, k;
        std::cin >> n >> d >> k;
        int a[n]{}, b[n]{};
        while (k--)
        {
            int l, r;
            std::cin >> l >> r;
            a[l - 1]++;
            b[r - 1]--;
        }
        int c = 0;
        for (int i = 0; i < d; ++i)
            c += a[i];
        int brother = 0, mx = c, mother = 0, mn = c;
        for (int i = d; i < n; ++i)
        {
            c += a[i] + b[i - d];
            if (c > mx)
                mx = c, brother = i - d + 1;
            if (c < mn)
                mn = c, mother = i - d + 1;
        }
        std::cout << brother + 1 << ' ' << mother + 1 << '\n';
    }
}