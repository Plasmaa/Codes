#include <bits\stdc++.h>
using namespace std;
main()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    cout << (s == t ? "YES" : "NO");
}