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

    ll n, min_v = INT_MAX, max_v = 0, min_c = 0, max_c = 0, val;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;

        if (val < min_v)
        {
            min_v = val;
            min_c = 0;
        }

        if (val == min_v)
            min_c++;

        if (val > max_v)
        {
            max_v = val;
            max_c = 0;
        }

        if (val == max_v)
            max_c++;
    }

    cout << max_v - min_v << " ";

    if (max_v - min_v)
        cout << max_c * min_c;
    else
        cout << ((n) * (n - 1)) / 2;

    return 0;
}