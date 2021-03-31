//Problem link : https://codeforces.com/problemset/problem/69/A

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

    int x = 0, y = 0, z = 0, n, temp;

    cin>>n;

    while(n--)
    {
        cin>>temp;
        x += temp;

        cin>>temp;
        y += temp;

        cin>>temp;
        z += temp;
    }

    if(x == 0 && y == 0 && z == 0)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}