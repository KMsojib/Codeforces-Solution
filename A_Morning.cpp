
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


int main()
{
    //fast_io;
    int t=1;  cin>>t;
    while(t--){
        string s;   cin>>s;
        int a,b,c,d;
        a=s[0]-'0';
        if(a==0)a=10;

        b=s[1]-'0';
        if(b==0)b=10;

        c=s[2]-'0';
        if(c==0)c=10;

        d=s[3]-'0';
        if(d==0)d=10;
        ll ans=0;
        ans+=abs(a-1)+abs(a-b)+1+abs(b-c)+1+abs(c-d)+1;
        cout<<ans+1<<endl;
    }
    return 0;
}