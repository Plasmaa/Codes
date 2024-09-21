#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a; cin>>a;
    int c=0;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            cout<<"YES";
            c++;
            break;
        }
    }
    if(c==0)
        cout<<"NO";

    return 0;
}
