// Problem link : https://codeforces.com/problemset/problem/272/A

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

    int n, sum = 0, temp, cnt = 0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>temp;
        sum += temp;
    }

    n++;

    for(int i=1; i<=5; i++)
    {
        if((sum+i)%n != 1)
        cnt++;
    }

    cout<<cnt;

    return 0;
}