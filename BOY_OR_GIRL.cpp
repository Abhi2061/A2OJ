// Problem link : https://codeforces.com/problemset/problem/236/A

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

    set<char> st;
    string S;

    cin>>S;

    for(char it : S)
    st.insert(it);

    if(st.size()%2)
    cout<<"IGNORE HIM!";
    else
    cout<<"CHAT WITH HER!";
    
    return 0;
}