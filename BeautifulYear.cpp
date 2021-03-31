// Problem link : https://codeforces.com/problemset/problem/271/A

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

    int Y, A;
    cin>>Y;

    set<int> S;

    do
    {
        S.clear();
        A = ++Y;

        while(A)
        {
            S.insert(A%10);
            A /= 10;
        }
    } while (S.size() != 4);
    
    cout<<Y;
    return 0;
}