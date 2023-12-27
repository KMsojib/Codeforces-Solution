#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t=1; // cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        in_range(0,n){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans=0;
        if( k == 0 )
        {
            if(a[0]==1)
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                a[0]-=1;
                cout<<a[0]<<endl;
                return 0;
            }
        }

        else
        {
            ans=a[k-1];
            int cn=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]<=ans)
                {
                    cn++;
                }
            }

            if(cn<1 or cn!=k)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}