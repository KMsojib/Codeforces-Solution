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
    ll n,m,k;   cin>>n>>m>>k;
    vll a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll x=a[n-1];
    ll y=a[n-2];
    ll ans=(x*k+y)*(m/(k+1))+(x*(m%(k+1)));
    cout<<ans<<endl;
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

