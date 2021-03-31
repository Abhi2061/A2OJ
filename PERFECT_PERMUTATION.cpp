// Problem link : https://codeforces.com/problemset/problem/233/A

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

    int n;
    cin>>n;

    vector<int> A(n);

    if(n%2)
    {
        A.clear();
        A.push_back(-1);
    }
    else
    {
        for(int i=0; i<n/2; i++)
        {
            A[2*i] = 2*(i+1);
            A[2*i+1] = 2*i + 1;
        }
    }

    for(int it : A)
    cout<<it<<" ";

    return 0;
}