#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nl "\n"
#define mod 1000000007
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll n,b,d;
    cin>>n>>b>>d;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x<=b)
        {
            a.push_back(x);
        }
    }

    ll cn = 0;
    ll temp = 0;
    for(int i=0;i<a.size();i++)
    {
        temp+=a[i];
        if(temp>d)
        {
            temp=0;
            cn++;
        }
    }
    cout<<cn<<nl;
}

int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
