// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);

//     string caps;
//     getline(cin, caps);

//     int len = caps.length();
//     int f = 0;

//     if(caps[0]<97)

//     for (int i = 1; i < len; i++)
//     {
//         if (caps[i] > 90)
//         {
//             f++;
//             break;
//         }
//     }

//     if (f == 0)
//     {
//         caps[0] = toupper(caps[0]);

//         for (int i = 1; i < len; i++)
//         {
//             caps[i] = tolower(caps[i]);
//         }
//         cout << caps;
//     }
//     else if (f > 0)
//     {vector<int>a[];
//         cout << caps;
//     }

//     return 0;
// }

// #include <cstdio>
//                                      char a[105];
// main()
// {
//     int i = 1, f = 1;
//     gets(a);
//     for (; a[i];)
//         f &= (a[i++] < 'a');
//     for (i = 0; a[i];)
//         putchar(a[i++] ^ f * 32);
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w;
    cin >> w;
    int n = w.size();
    for (int i = 1; i < n; ++i)
    {
        if (islower(w[i]))
        {
            cout << w;
            exit(0);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (islower(w[i]))
            w[i] = toupper(w[i]);
        else
            w[i] = tolower(w[i]);
    }
    cout << w;
}