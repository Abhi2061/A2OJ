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

    char t;
    int n, m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>t;

            if(t == '-')
            cout<<t;
            else
            {
                if(((i%2)+(j%2))%2)
                cout<<'W';
                else
                cout<<'B';
            }
        }
        cout<<"\n";
    }
    return 0;
}