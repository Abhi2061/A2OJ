// Problem link : https://codeforces.com/problemset/problem/450/A

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

    int n, m, temp, max = 0, last, cnt;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>temp;

        cnt = temp/m;

        if(temp%m)
        cnt++;

        if(cnt >= max)
        {
            max = cnt;
            last = i;
        }
    }

    cout<<last;

    return 0;
}