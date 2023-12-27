/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


int main()
{
    fast_io;
    ll n,m;    cin>>n>>m;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    set<int>st;
    for(int i=n;i>0;i--){
        st.insert(a[i]);
        a[i]=st.size();
    }
    while(m--){
        /* code */
        ll x;  cin>>x;
        cout<<a[x]<<endl; //O(1)
    }
    
    return 0;
}

