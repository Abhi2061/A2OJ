// Problem link : https://codeforces.com/problemset/problem/139/A

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

    int n, total = 0;
    cin>>n;

    vector<int> W(7);

    for(int &it : W)
    cin>>it;

    for(int it : W)
    total += it;

    if(n%total == 0)
    n = total;
    else
    n %= total;

    for(int i=0; i<7; i++)
    {
        n -= W[i];

        if(n <= 0)
        {
            cout<<i+1;
            break;
        }
    }

    return 0;
}