// Problem link : https://codeforces.com/problemset/problem/224/A

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

    int l , b, h, i = 1, sum = 0;
    vector<int> a(3);

    cin>>a[0]>>a[1]>>a[2];

    sort(a.begin(), a.end());

    bool f = false;

    while(!f)
    {
        if(a[0]%i == 0)
        {
            l = i;
            b = a[0]/i;

            if(a[1]%b == 0)
            {
                h = a[1]/b;

                if(l*h == a[2])
                f = true;
            }
        }
        i++;
    }

    sum = 4*l + 4*b + 4*h;

    cout<<sum;

    return 0;
}