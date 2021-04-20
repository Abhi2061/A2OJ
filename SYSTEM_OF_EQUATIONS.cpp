// Problem link : https://codeforces.com/problemset/problem/214/A

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

    int n, m, cnt = 0;
    cin>>n>>m;

    for(int a=0; a<=sqrt(n); a++)
    {
        int b = n - a*a;

        if(a + b*b == m)
        cnt++;
    }

    cout<<cnt;

    return 0;
}