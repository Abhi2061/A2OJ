// Problem link : https://codeforces.com/problemset/problem/96/A


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

    int cnt = 1;
    bool f = false;
    string S;
    cin>>S;

    for(int i=1; i<S.length(); i++)
    {
        if(S[i] == S[i-1])
        cnt++;
        else
        cnt = 1;

        if(cnt >= 7)
        {
            f = true;
            break;
        }
    }

    if(f)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}