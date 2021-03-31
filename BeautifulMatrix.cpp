//Problem link : https://codeforces.com/problemset/problem/263/A

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

    int x, y, temp;

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>temp;

            if(temp == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    cout<<abs(3-x)+abs(3-y);

    return 0;
}