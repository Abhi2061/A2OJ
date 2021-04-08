// Problem link : https://codeforces.com/problemset/problem/320/A

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

    string S;
    cin>>S;

    bool f = true;
    int cnt = 2;

    for(char it : S)
    {
        if(it != '1' && it != '4')
        f = false;
        else if(it == '4')
        {
            cnt++;

            if(cnt > 2)
            f = false;
        }
        else 
        cnt = 0;
    }

    if(f)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}