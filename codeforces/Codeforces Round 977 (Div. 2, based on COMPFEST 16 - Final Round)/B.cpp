#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int find_max_mex(vector<int> &a, int n, int x)
{
    set<int> present;
    for (int val : a)
    {
        present.insert(val); // Insert all elements in a set
    }

    int mex = 0; // Start checking from 0 upwards
    int extra_ops = 0;

    while (true)
    {
        if (present.find(mex) != present.end())
        {
            // If 'mex' is present in the array, increment it
            mex++;
        }
        else if (extra_ops > 0)
        {
            // If 'mex' is missing, but we can "create" it by using the operation
            mex++;
            extra_ops--;
        }
        else
        {
            break; // No more operations can help, stop
        }
    }

    return mex;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        cout << find_max_mex(a, n, x) << endl;
    }

    return 0;
}
