// Problem link : https://codeforces.com/problemset/problem/149/A

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

    int k, ans = -1;

    cin>>k;

    vector<int> A(12);

    for(int &it : A)
    cin>>it;

    sort(A.begin(), A.end(), greater<int>());

    for(int i=0; i<12; i++)
    {
        if(k <= 0)
        {
            ans = i;
            break;
        }
        
        k -= A[i];
    }

    if(ans < 0)
    {
        if(k != 0)
        cout<<ans;
        else
        cout<<12;
    }
    else
    cout<<ans;

    return 0;
}