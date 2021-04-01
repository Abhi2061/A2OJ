// Problem link : https://codeforces.com/problemset/problem/248/A

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

    int n, ld, rd, l = 0, r = 0, ans;

    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>ld>>rd;

        if(ld == 0)
        l++;
        if(rd == 0)
        r++;
    }

    ans = min(l,n-l) + min(r,n-r);

    cout<<ans;

    return 0;
}