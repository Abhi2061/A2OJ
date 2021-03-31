// Problem link : https://codeforces.com/problemset/problem/275/A

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

    int input;
    vector<vector<int>> ans(3,vector<int>(3,1));

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>input;

            if(input%2)
            {
                ans[i][j] = (ans[i][j]+1)%2;

                if(i+1<3)
                ans[i+1][j] = (ans[i+1][j]+1)%2;
                if(i-1>=0)
                ans[i-1][j] = (ans[i-1][j]+1)%2;
                if(j+1<3)
                ans[i][j+1] = (ans[i][j+1]+1)%2;
                if(j-1>=0)
                ans[i][j-1] = (ans[i][j-1]+1)%2;                
            }
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        cout<<ans[i][j];

        cout<<"\n";
    }

    return 0;
}