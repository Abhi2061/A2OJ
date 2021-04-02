// Problem link : https://codeforces.com/problemset/problem/228/A

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

    int cnt = 0, prev = 0;
    vector<int> S(4);

    for (int &it : S)
        cin >> it;

    sort(S.begin(), S.end());

    for (int it : S)
    {
        if (it == prev)
            cnt++;
        else
            prev = it;
    }

    cout << cnt;

    return 0;
}