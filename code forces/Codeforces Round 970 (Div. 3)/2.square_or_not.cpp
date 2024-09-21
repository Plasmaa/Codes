#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        int b[a];

        for (int i = 0; i < a; i++)
            cin >> b[i];

        int s = sqrt(a);
        if (a != s * s)
        {
            cout << "NO" << endl;
        }
        else if (a == s * s)
        {
            if (s == 2)
            {
                int f = 0;
                for (int i = 0; i < a; i++)
                {
                    if (b[i] == 0)
                    {
                        cout << "NO" << endl;
                        f++;
                        break;
                    }
                }
                if (f == 0)
                    cout << "YES" << endl;
            }
            else if (s > 2)
            {
                int one_should = s * 2 + (s - 2) * 2;
                int one = 0;
                int zero_should = a - one_should;
                int zero = 0;
                for (int i = 0; i < a; i++)
                {
                    if (b[i] == 0)
                        zero++;
                    else if (b[i] == 1)
                        one++;
                }
                if (one_should == one && zero_should == zero)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}