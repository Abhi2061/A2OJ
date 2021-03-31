// Problem link : https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int next_prime(int n)
{
    while(true)
    {
        n++;
        int cnt = 0;

        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            cnt++;
        }

        if(cnt == 0)
        return n;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin>>n>>m;

    if(next_prime(n) == m)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}