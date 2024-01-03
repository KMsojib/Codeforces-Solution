/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
#define mod = 1000000007;
int main()
{
    fast_io;
    ll n,q;
    cin>>n>>q;
    n--;
    vector<pair<ll,ll>>a(n);
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x,y;
        a.push_back({x,y});
    }
    while (q--)
    {
        ll k;
        cin>>k;
        vector<int>ar(k);
        for(int i=0;i<k;i++)
        {
            cin>>ar[i];
        }
        if(k==1)
        {
            cout<<0<<endl;
        }
        else{
            ll sum=0;
            for(int i=0;i<k;i++)
            {
                for(int j=i+1;j<k;j++)
                {
                    sum+= ar[i]*ar[j];
                    sum+= abs(ar[i]-ar[j]);
                }
            }
            sum = sum%1000000007;
            cout<<sum<<endl;
        }
    }
    return 0;
}
