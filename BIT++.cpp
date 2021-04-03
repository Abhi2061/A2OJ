// Problem link : https://codeforces.com/problemset/problem/282/A

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

    int T, X = 0;
    cin>>T;

    while(T--)
    {
        string S;
        cin>>S;

        if(S[1] == '+')
        X++;
        else
        X--;
    }

    cout<<X;
    
    return 0;
}