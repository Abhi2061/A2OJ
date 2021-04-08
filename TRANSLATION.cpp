// Problem link : https://codeforces.com/problemset/problem/41/A

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

    string s1, s2;
    cin>>s1>>s2;

    int l = s1.length();
    bool f = true;
    
    for(int i=0; i<l; i++)
    {
        if(s1[i] != s2[l-i-1])
        {
            f = false;
            break;
        }
    }

    if(f)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}