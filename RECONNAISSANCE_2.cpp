// Problem link : https://codeforces.com/problemset/problem/34/A

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

    int n, f, s, min = INT_MAX;
    cin>>n;

    vector<int> A(n);

    for(int &it : A)
    cin>>it;

    for(int i=0; i<n; i++)
    {
        if(abs(A[i]-A[(i+1)%n]) < min)
        {
            min = abs(A[i]-A[(i+1)%n]);
            f = i+1;
            s = i+2;

            if(s > n)
            s %= n;
        }
    }

    cout<<f<<" "<<s;

    return 0;
}