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
        ll n,m,k;
        cin>>n>>m>>k;
        
        if(k == 1)
        {
            printf("1\n");
        }
        else if(k == 2)
        {
            ll ans=0;
            ans+=m/n; /* Multiple of m in n range*/
            ans+=min(n-1,m);
            printf("%lld\n",ans);
        }
        else if( k == 3)
        {
            ll ans = 0;
            ans+=max(m-n+1,0ll);
            //printf("max of ans : %d\n",ans);
            ans-=m/n;/* Multiple of m in n range*/
            //printf("After - ans is : %d\n",ans);
            printf("%lld\n",ans);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
