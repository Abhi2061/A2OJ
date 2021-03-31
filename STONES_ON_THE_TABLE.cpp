// Problem link : https://codeforces.com/problemset/problem/266/A

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

    int n, cnt = 0;
    string S;

    cin>>n;
    cin>>S;

    for(int i=0; i<n-1; i++)
    {
        if(S[i] == S[i+1])
        cnt++;
    }

    cout<<cnt;
    
    return 0;
}