// Problem link : https://codeforces.com/problemset/problem/133/A

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
    bool f = false;

    cin>>S;

    for(char it : S)
    {
        if(it == 'H' || it == 'Q' || it == '9')
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