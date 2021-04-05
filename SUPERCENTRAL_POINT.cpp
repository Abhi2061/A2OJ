// Problem link : https://codeforces.com/problemset/problem/165/A

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

    int n, cnt = 0;
    cin>>n;

    vector<vector<int>> P(n,vector<int>(2));

    for(int i=0; i<n; i++)
    cin>>P[i][0]>>P[i][1];
    
    for(auto it1 : P)
    {
        bool up = false, lo = false, rt = false, lt = false;

        for(auto it2 : P)
        {
            if(it1[0] == it2[0])
            {
                if(it1[1] > it2[1])
                lt = true;

                if(it1[1] < it2[1])
                rt = true;
            }

            if(it1[1] == it2[1])
            {
                if(it1[0] > it2[0])
                lo = true;

                if(it1[0] < it2[0])
                up = true;
            }

            if(up && lo && lt && rt)
            {
                cnt++;
                break;
            }          
        }
    }

    cout<<cnt;
    
    return 0;
}