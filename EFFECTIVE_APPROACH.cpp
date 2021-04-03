// Problem link : https://codeforces.com/problemset/problem/227/B

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

    int n, m, temp;
    ll v = 0, p = 0;
    map<int,int> mp;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>temp;
        mp.insert({temp,i});
    }

    cin>>m;

    for(int i=0; i<m; i++)
    {
        cin>>temp;

        v += (ll)mp[temp];
        p += (ll)(n - mp[temp] + 1);
    }

    cout<<v<<" "<<p;

    return 0;
}