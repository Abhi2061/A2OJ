//Problem link : https://codeforces.com/problemset/problem/266/B

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

    int n, t;
    string S;

    cin>>n>>t;
    cin>>S;

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(S[j]=='B' && S[j+1]=='G')
            {
                S[j] = 'G';
                S[j+1] = 'B';
                j++;
            }
        }
    }

    cout<<S;

    return 0;
}