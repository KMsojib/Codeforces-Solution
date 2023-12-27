#include<bits/stdc++.h>
using namespace std;

/* shortcurt */
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    string s;   cin>>s;
    ll n;   cin>>n;
    if( n==1 ){
        string s1;  cin>>s1;
        if( s1==s ){
            cout<<"YES\n";
        }
        else{
            reverse(s1.begin(),s1.end());
            if(s1==s){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    else{
        bool ok1=false,ok2=false,ok=false;
        for(int i=0;i<n;i++){
            string s1;  cin>>s1;
            if(s[0]==s1[1]) ok1=true;
            if(s[1]==s1[0]) ok2=true;
            if(s==s1)   ok=true;
        }

        if((ok) || (ok1&&ok2)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }



}

int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

