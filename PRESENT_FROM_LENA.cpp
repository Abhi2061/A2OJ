#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, i, j, k;
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=1; j<2*(n-i); j++)
        cout<<' ';

        for(j=0; j<i; j++)
        cout<<' '<<j;

        cout<<' '<<i;

        for(j=i-1; j>=0; j--)
        cout<<' '<<j;

        cout<<"\n";
    }

    for(i=0; i<n; i++)
    cout<<i<<" ";

    cout<<n;

    for(i=n-1; i>=0; i--)
    cout<<' '<<i;

    cout<<"\n";

    for(i=n-1; i>=0; i--)
    {
        for(j=1; j<2*(n-i); j++)
        cout<<' ';

        for(j=0; j<i; j++)
        cout<<' '<<j;

        cout<<' '<<i;

        for(j=i-1; j>=0; j--)
        cout<<' '<<j;

        cout<<"\n";
    }

    return 0;
}