// Problem link : https://codeforces.com/problemset/problem/215/A

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

    int n, m, cnt = 0, max = -1;
    cin>>n;

    vector<int> A(n);

    for(int &it : A)
    cin>>it;

    cin>>m;

    vector<int> B(m);

    for(int &it : B)
    cin>>it;

    for(int it1 : B)
    {
        for(int it2 : A)
        {
            if(it1%it2 == 0)
            {
                if(it1/it2 == max)
                cnt++;
                else if(it1/it2 > max)
                {
                    max = it1/it2;
                    cnt = 1;
                }
            }
        }
    }

    cout<<cnt;
    
    return 0;
}