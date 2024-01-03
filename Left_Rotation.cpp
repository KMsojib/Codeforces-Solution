
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        vector<ll>a(n);
        in_range(0,n)
        {
            cin>>a[i];
        }
        for(int i=d;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        for(int i=0;i<d;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
