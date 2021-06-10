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

    string S;
    cin>>S;

    for(char it : S)
    {
        char t = tolower(it);

        if(t != 'a' and t != 'e' and t != 'i' and t != 'o' and t != 'u' and t != 'y')
        cout<<'.'<<t;
    }

    return 0;
}