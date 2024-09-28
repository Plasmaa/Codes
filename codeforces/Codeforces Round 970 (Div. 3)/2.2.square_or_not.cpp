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

        string b;
        cin >> b;

        int s = sqrt(a);
        if (a != s * s)
        {
            cout << "NO" << endl;
        }
        else if (s == 2)
        {
            bool is_beautiful = true;
            for (int i = 0; i < a; i++)
            {
                if (b[i] == '0')
                {
                    cout << "NO" << endl;
                    is_beautiful = false;
                    break;
                }
            }
            if (is_beautiful)
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
                if (b[i] == '0')
                    zero++;
                else if (b[i] == '1')
                    one++;
            }
            if (one_should == one && zero_should == zero)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
