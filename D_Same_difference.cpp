#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl cout<<"\n"
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;
        cin>>n;

        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll x;   cin>>x;
            mp[x-i]++;
        }

        ll total=0;
        for(auto x : mp){
            cout<<x.second<<" ";
            total+=(x.second)*(x.second-1)/2;
        }
        //cout<<total;
        nl;
    }

    return 0;
}
