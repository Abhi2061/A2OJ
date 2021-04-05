// Problem link : https://codeforces.com/problemset/problem/352/A

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

    int n, temp, cnt_5 = 0, cnt_0 = 0;
    string ans;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>temp;

        if(temp == 5)
        cnt_5++;
        else
        cnt_0++;
    }

    if(cnt_5 >= 9 && cnt_0 != 0)
    {
        cnt_5 /= 9;

        for(int i=0; i<cnt_5*9; i++)
        ans.push_back('5');

        for(int i=0; i<cnt_0; i++)
        ans.push_back('0');
    }
    else if(cnt_0 != 0)
    ans.push_back('0');
    else
    {
        ans.push_back('-');
        ans.push_back('1');
    }

    cout<<ans;

    return 0;
}