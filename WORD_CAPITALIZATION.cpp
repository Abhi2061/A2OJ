// Problem link : https://codeforces.com/problemset/problem/281/A

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

    string S;
    cin>>S;

    S[0] = toupper(S[0]);

    cout<<S;
    
    return 0;
}