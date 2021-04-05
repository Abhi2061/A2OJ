// Problem link : https://codeforces.com/problemset/problem/318/A

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

    ll n, k;
    cin>>n>>k;

    if(k > (n+1)/2)
    {
        k -= (n+1)/2;
        cout<<2*k;
    }
    else
    cout<<2*k-1;

    return 0;
}