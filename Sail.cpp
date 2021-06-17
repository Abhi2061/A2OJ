#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2, t, V, H, i;
    cin>>t>>x1>>y1>>x2>>y2;

    H = x2-x1;
    V = y2-y1;

    string s;
    cin>>s;

    for(i=1; i<=t; i++)
    {
        if(s[i-1] == 'N' and V > 0)
        V--;

        else if(s[i-1] == 'S' and V < 0)
        V++;

        else if(s[i-1] == 'E' and H > 0)
        H--;

        else if(s[i-1] == 'W' and H < 0)
        H++;

        if(H == 0 and V == 0)
        break;
    }

    if(i > t)
    cout<<-1<<endl;
    else
    cout<<i<<endl;
    
    return 0;
}