// Problem link : https://codeforces.com/problemset/problem/141/A

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

    bool f1, f2, f3 = false;
    string guest, host, letters;
    cin >> guest >> host >> letters;

    for (char it : guest)
    {
        f1 = false;
        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] == it)
            {
                f1 = true;
                letters.erase(letters.begin() + i);
                break;
            }
        }

        if (!f1)
            break;
    }

    for (char it : host)
    {
        f2 = false;
        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] == it)
            {
                f2 = true;
                letters.erase(letters.begin() + i);
                break;
            }
        }

        if (!f2)
            break;
    }

    if (letters.size() == 0)
        f3 = true;

    if (f1 && f2 && f3)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}