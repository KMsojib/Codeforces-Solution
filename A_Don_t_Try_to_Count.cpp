
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

bool substring(string x, string s){
    size_t found = x.find(s);
    if(found!=string::npos){
        return true;
    }
    return false;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n,m;    cin>>n>>m;
        string x,s;
        cin>>x>>s;

        if(x==s){
            cout<<0<<endl;
            continue;
        }
        bool f=false;
        int cn=0;
        for(int i=0;n<m; i++){
            x=x+x;
            n=n+n;
            cn++;
        }
        bool ok=substring(x,s);
        if(ok){
            cout<<cn<<endl;
        }
        else if(substring(x+x,s)){
            cn++;
            cout<<cn<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}

