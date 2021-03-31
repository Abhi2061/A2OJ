// Problem link : https://codeforces.com/problemset/problem/200/B

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

    float n, temp, ans, sum = 0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>temp;
        
        sum += temp;
    }

    ans = sum/n;

    cout<<ans;

    return 0;
}