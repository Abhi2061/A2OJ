// Problem link : https://codeforces.com/problemset/problem/144/A

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

    int N, ans, temp, h = -1, h_p, l = 101, l_p;
    cin>>N;

    for(int i=1; i<=N; i++)
    {
        cin>>temp;

        if(temp > h)
        {
            h = temp;
            h_p = i;
        }
        if(temp <= l)
        {
            l = temp;
            l_p = i;
        }
    }

    ans = h_p - 1 + N - l_p;

    if(h_p > l_p)
    ans--;

    cout<<ans;
    return 0;
}