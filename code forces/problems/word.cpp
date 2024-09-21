#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int cap = 0, sm = 0;

    for (auto it : s)
    {
        if (isupper(it))
            cap++;
        else if (islower(it))
            sm++;
    }

    if (cap > sm)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}