#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<int>a;
    for(int i=1;i<=k;i++){
        a.push_back(i);
    }
    for(int i=n;i>k;i--){
        a.push_back(i);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
