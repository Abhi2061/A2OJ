// Problem link : https://codeforces.com/problemset/problem/339/B

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

    ll cnt = 0;
    int n, m, next, pos = 1;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>next;

        if(next > pos)
        {
            cnt += (ll)(next - pos);
            pos = next;
        }
        else if(next < pos)
        {
            cnt += (ll)n;
            cnt -= (ll)(pos - next);
            pos = next;
        }
    }

    cout<<cnt;

    return 0;
}