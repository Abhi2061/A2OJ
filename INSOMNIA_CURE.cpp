// Problem link : https://codeforces.com/problemset/problem/148/A

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

    int k, l, m, n, d, cnt = 0;
    cin>>k>>l>>m>>n>>d;

    for(int i=1; i<=d; i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
        cnt++;
    }

    cout<<cnt;
    
    return 0;
}