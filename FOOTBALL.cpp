// Problem link : https://codeforces.com/problemset/problem/43/A

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

    int n, max = INT_MIN;
    cin>>n;

    map<string,int> mp;
    string temp, ans;

    for(int i=0; i<n; i++)
    {
        cin>>temp;

        mp[temp]++;
    }

    for(auto it=mp.rbegin(); it!=mp.rend(); it++)
    {
        if(it->second > max)
        {
            max = it->second;
            ans = it->first;
        }
    }

    cout<<ans;

    return 0;
}