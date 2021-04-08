// Problem link : https://codeforces.com/problemset/problem/34/B

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

    int n, m, profit = 0;
    cin>>n>>m;

    vector<int> A(n);

    for(int &it : A)
    cin>>it;

    sort(A.begin(), A.end());

    for(int i=0; i<m; i++)
    {
        if(A[i] >= 0)
        break;
        
        profit -= A[i];
    }

    cout<<profit;

    return 0;
}