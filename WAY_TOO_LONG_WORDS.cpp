// Problem link : https://codeforces.com/problemset/problem/71/A

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

    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;

        if (S.length() > 10)
            cout << S[0] << S.length() - 2 << S[S.length() - 1] << endl;

        else
            cout << S << endl;
    }
    return 0;
}