#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x=0,n;cin>>n;

    for(int i=0; i<n; i++)
    {
        string a; cin>>a;cin.ignore();

        if (a=="++X" || a=="X++")
        {
            x++;
        }
        else if (a=="--X" || a=="X--")
        {
            x--;
        }
    }
    cout<<x;
}
