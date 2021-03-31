// Problem link : https://codeforces.com/problemset/problem/59/A

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
    int upper = 0, lower = 0;

    cin>>S;

    for(char it : S)
    {
        if(isupper(it))
        upper++;
        else
        lower++;
    }

    if(upper > lower)
    {
        for(char &it : S)
        it = toupper(it);
    }
    else
    {
        for(char &it : S)
        it = tolower(it);
    }

    cout<<S;
    
    return 0;
}