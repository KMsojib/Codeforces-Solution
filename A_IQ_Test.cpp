#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


int main()
{
    fast_io;
    vector<string>a;
    for(int i=0;i<4;i++)
    {
        string s;
        cin>>s;
        a.push_back(s);
    }

    //cout << (all_eq(a[0], a[1]) || all_eq(a[2], a[3]) ? "YES\n" : "NO\n");
    if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3])
    {
        cout<<"YES\n";
    }
    else if(a[0]==a[2] && a[1]==a[3])
    {
        cout<<"NO\n";
    }
    else if((a[0]==a[2] && a[1]!=a[3]) or (a[0]!=a[2] && a[1]==a[3]))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
//https://codeforces.com/contest/287/problem/A