// Problem link : https://codeforces.com/problemset/problem/231/A

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

    int T, cnt = 0;
    cin>>T;

    while(T--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        if(a+b+c >= 2)
        cnt++;
    }

    cout<<cnt;
    
    return 0;
}