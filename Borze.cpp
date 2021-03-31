// Problem link : https://codeforces.com/problemset/problem/32/B

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

    string S, A;
    cin>>S;

    for(int i=0; i<S.size(); i++)
    {
        if(S[i] == '.')
        A.push_back('0');
        else if(S[++i] == '.')
        A.push_back('1');
        else
        A.push_back('2');
    }

    cout<<A;
    
    return 0;
}