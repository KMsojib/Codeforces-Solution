#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t=1;//  cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;   cin>>s;
        int cn=count(s.begin(),s.end(),'8');
        if(cn==0)
        {
            cout<<0<<endl;
        }
        else if(cn<=2)
        {
            cout<<1<<endl;
        }
        else if(cn%2==0)
        {
            cout<<cn/2<<endl;
        }
        else{
            cout<<cn<<endl;
        }
    }

    return 0;
}