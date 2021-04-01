// Problem link : https://codeforces.com/problemset/problem/116/A

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

    int n, O, I, P = 0, max_P = 0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>O;
        P -= O;
        
        cin>>I;
        P += I;

        if(P > max_P)
        max_P = P;
    }

    cout<<max_P;

    return 0;
}