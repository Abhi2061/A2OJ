// Problem link : https://codeforces.com/problemset/problem/205/A

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

    int n, temp, min = INT_MAX, min_pos;
    bool min_cnt;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>temp;

        if(temp < min)
        {
            min = temp;
            min_cnt = true;
            min_pos = i;
        }
        else if(temp == min)
        min_cnt = false;
    }

    if(!min_cnt)
    cout<<"Still Rozdil";
    else
    cout<<min_pos;

    return 0;
}