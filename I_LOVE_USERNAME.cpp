// Problem link : https://codeforces.com/problemset/problem/155/A

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

    int n, temp, high, low, cnt = 0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>temp;

        if(i==0)
        high = low = temp;
        else if(temp > high)
        {
            cnt++;
            high = temp;
        }
        else if(temp < low)
        {
            cnt++;
            low = temp;
        }
    }

    cout<<cnt;

    return 0;
}