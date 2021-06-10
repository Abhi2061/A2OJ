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

    int n, m, min_diff = INT_MAX;
    cin>>n>>m;

    vector<int> A(m);

    for(int &it : A)
    cin>>it;

    sort(A.begin(), A.end());
    
    for(int i=0; i<=m-n; i++)
    min_diff = min(A[i+n-1]-A[i],min_diff);

    cout<<min_diff;

    return 0;
}