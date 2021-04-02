// Problem link : https://codeforces.com/problemset/problem/151/A

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

    int n, k, l, c, d, p, nl, np, cnt;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cnt = (k*l)/nl;

    if((c*d) < cnt)
    cnt = c*d;

    if(p/np < cnt)
    cnt = p/np;

    cnt /= n;

    cout<<cnt;

    return 0;
}