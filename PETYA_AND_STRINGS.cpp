// Problem link : https://codeforces.com/problemset/problem/112/A

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

    string S1, S2;
    int ans = 0;
    cin>>S1>>S2;

    for(int i=0; i<S1.length(); i++)
    {
        if(toupper(S1[i]) > toupper(S2[i]))
        {
            ans = 1;
            break;
        }
        else if(toupper(S1[i]) < toupper(S2[i]))
        {
            ans = -1;
            break;
        }
    }

    cout<<ans;

    return 0;
}