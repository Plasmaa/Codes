// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int z;
//     cin >> z;

//     int b[z];
//     for (int i = 0; i < z; i++)
//         cin >> b[i];

//     for (int i = 0; i < z; i++)
//     {
//         int drink = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (b[i] >= a[j])
//                 drink++;
//         }
//         cout << drink << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int z;
    cin >> z;
    vector<int> b(z);

    for (int i = 0; i < z; i++)
        cin >> b[i];

    for (int i = 0; i < z; i++)
    {
        int count = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << count << endl;
    }

    return 0;
}
