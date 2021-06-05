// Problem link : https://codeforces.com/problemset/problem/124/A


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

    int n, a, b, cnt = 0;
    cin>>n>>a>>b;

    cnt = min(n-a, b+1);

    cout<<cnt<<"\n";

    return 0;
}