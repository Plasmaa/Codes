#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char a[n][4];
        vector<int> view;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < 4; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '#')
                {
                    view.push_back(j + 1);
                }
            }
        }
        reverse(view.begin(), view.end());
        for (auto it : view)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}