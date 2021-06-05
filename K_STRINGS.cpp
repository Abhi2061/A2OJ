// Problem link : https://codeforces.com/problemset/problem/219/A


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

    int K;
    cin >> K;

    string S, ans = "";
    cin >> S;

    bool f = true;
    map<char, int> hash;

    for (char it : S)
        hash[it]++;

    for (auto it : hash)
        if (it.second % K)
            f = false;

    if (!f)
        ans = "-1";
    else
    {
        for (int i = 0; i < K; i++)
        {
            for (auto it : hash)
            {
                for (int k = 0; k < it.second / K; k++)
                    ans.push_back(it.first);
            }
        }
    }

    cout << ans;

    return 0;
}