// Problem link : https://codeforces.com/problemset/problem/110/A

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

    ll n;
    cin>>n;

    int cnt = 0;

    while(n)
    {
        if(n%10==4 || n%10==7)
        cnt++;

        n /= 10;
    }

    bool f = true;

    if(cnt == 0)
    f = false;

    while(cnt)
    {
        if(cnt%10!=4 && cnt%10!=7)
        {
            f = false;
            break;
        }

        cnt /= 10;
    }

    if(f)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}