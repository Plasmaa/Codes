#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a; cin>>a;

    for (int i=0; i<a.length(); i+=2)
    {
        for (int j=i; j<a.length(); j+=2)
        {
            if (a[i]>a[j])
            {
                char b;
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    cout<<a;

    return 0;
}
