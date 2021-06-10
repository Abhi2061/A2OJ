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

    bool f = true;
    int S, n;
    cin>>S>>n;

    vector<pair<int,int>> A(n);

    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;

        A[i] = {x,y};
    }

    sort(A.begin(), A.end());

    for(auto it : A)
    {
        if(S > it.first)
        S += it.second;
        else
        {
            f = false;
            break;
        }
    }

    if(f)
    cout<<"YES\n";
    else
    cout<<"NO\n";

    return 0;
}
