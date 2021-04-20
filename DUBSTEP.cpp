// Problem link : https://codeforces.com/problemset/problem/208/A

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

    string S, ans, temp;

    cin>>S;

    for(int i=0; i<S.length(); i++)
    {
        if(i < S.length()-2 && S[i] == 'W' && S[i+1] == 'U' && S[i+2] == 'B')
        {
            if(!temp.empty())
            {
                ans.append(temp);
                temp.clear();
                temp = ' ';
            }
        }
        else
        temp.push_back(S[i]);
    }
    return 0;
}