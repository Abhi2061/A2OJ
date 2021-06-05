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

    string S, ans, word = "";
    cin>>S;

    int n = S.length();

    for(int i=0; i<n; i++)
    {
        if(S[i] == 'W' and i < n-2 and S[i+1] == 'U' and S[i+2] == 'B')
        {
            if(!word.empty())
            {
                word.push_back(' ');
                ans.append(word);
                word.clear();
            }
            i +=2;
        }
        else
        word.push_back(S[i]);
    }

    if(!word.empty())
    ans.append(word);

    cout<<ans;
    
    return 0;
}
