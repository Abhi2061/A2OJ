// Problem link : https://codeforces.com/problemset/problem/339/A

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

    string S, temp;

    cin>>S;

    for(char it : S)
    {
        if(it != '+')
        temp.push_back(it);
    }

    sort(temp.begin(), temp.end());

    for(int i=0; i<temp.size(); i++)
    S[2*i] = temp[i];

    cout<<S;
    
    return 0;
}