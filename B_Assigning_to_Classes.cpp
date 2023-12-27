#include<bits/stdc++.h>
using namespace std;

/* shortcurt */
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    vll v(n*2);
    for(int i=0;i<n*2;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll x=v[n];
    ll y=v[n+1];
    

}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

