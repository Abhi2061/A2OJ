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

    int n, a;
    map<int, vector<int>> mp;
    vector<pair<int, int>> X;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a].push_back(i);
    }

    for (auto it : mp)
    {
        bool f = true;
        int d = 0, n;
        vector<int> A = it.second;
        n = A.size();

        if (n > 1)
            d = A[1] - A[0];

        for (int i = 1; i < n - 1; i++)
        {
            if (A[i + 1] - A[i] != d)
            {
                f = false;
                break;
            }
        }

        if (f)
            X.push_back({it.first, d});
    }

    cout << X.size() << "\n";

    for (auto it : X)
        cout << it.first << " " << it.second << "\n";
        
    return 0;
}