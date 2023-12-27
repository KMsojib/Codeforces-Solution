#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll n;  cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll cn=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cn+=abs(i+1-a[i]);
    }
    cout<<cn<<endl;
    
    return 0;
}
