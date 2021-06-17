#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    vector<int> hash(26);
    int cnt = 0;

    for(char it : s)
    hash[it-'a']++;

    for(int i=0; i<26; i++)
    if(hash[i]%2)
    cnt++;

    if(cnt == 0 or cnt%2)
    cout<<"First"<<endl;
    else
    cout<<"Second"<<endl;
    
    return 0;
}