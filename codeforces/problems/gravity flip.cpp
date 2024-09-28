#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;cin>>a;
    int x[a];

    for(int i=0; i<a; i++)
        cin>>x[i];

    sort(x,x+a); // sorting in increasing order for array not vector !

    for(int i=0; i<a; i++)
        cout<<x[i]<<" ";

    return 0;
}
