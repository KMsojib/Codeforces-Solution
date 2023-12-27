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
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a=n,b=n,c=n;
        for(ll i=2; i*i<=n; i++){
            if(n%i==0){
                a=i;
                break;
            }
        }
        n=n/a;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0 && i!=a){
                b=min(b,i);
            }
        }
        c=n/b;
        if(a!=b && b!=c && c>1){
            cout<<"YES\n";
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}

