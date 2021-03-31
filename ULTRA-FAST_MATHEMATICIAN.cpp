// Problem link : https://codeforces.com/problemset/problem/61/A

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

    string S1, S2, ans;
    cin>>S1>>S2;

    for(int i=0; i<S1.length(); i++)
    {
        if(S1[i] == S2[i])
        ans.push_back('0');
        else
        ans.push_back('1');
    }

    cout<<ans;
    
    return 0;
}