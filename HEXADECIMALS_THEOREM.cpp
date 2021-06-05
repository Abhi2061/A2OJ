// Problem link : https://codeforces.com/problemset/problem/199/A


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

    vector<ll> A(50);
    A[0] = 0;
    A[1] = 1;

    for(int i=2; i<50; i++)
    A[i] = A[i-1]+A[i-2];

    bool f = false;
    int n, n1, n2, n3;
    cin>>n;

    for(int i=0; i<50; i++)
    {
        if(A[i] > n)
        break;        

        for(int j=0; j<50; j++)
        {
            if(A[i]+A[j] > n)
            break;

            for(int k=0; k<50; k++)
            {
                if(A[i]+A[j]+A[k] == n)
                {
                    f = true;
                    n1 = A[i];
                    n2 = A[j];
                    n3 = A[k];
                    break;
                }
                
                else if(A[i]+A[j]+A[k] > n)
                break;
            }
            
            if(f)
            break;
        }
        
        if(f)
        break;
    }

    if(f)
    cout<<n1<<" "<<n2<<" "<<n3;
    else
    cout<<"I'm too stupid to solve this problem";

    return 0;
}