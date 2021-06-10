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

    int n, m, n1, n2, min = 0, max = 0;
    cin>>n>>m;

    n1 = n2 = n;

    vector<int> A(m);
    
    for(int &it : A)
    cin>>it;

    sort(A.begin(), A.end());

    for(int it : A)
    {
        if(it > n1)
        min += (n1*(it+(it-n1+1)))/2;
        else
        min += (it*(it+1))/2;

        n1 -= it;       

        if(n1 <= 0)
        break;
    }

    while(n2)
    {
        sort(A.begin(), A.end(), greater<int>());
        max += A[0];
        A[0]--;
        n2--;
    }

    cout<<max<<" "<<min;

    return 0;
}