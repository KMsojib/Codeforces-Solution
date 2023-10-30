#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nl "\n"
#define mod 1000000007
#define in_range(a,b)    for(int i=a;i<b;i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void solve()
{
    char a[8][8];
    bool f1=false,f2=false;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j] =='R')    f1=true;
            if(a[i][j] =='B')    f2=true;
        }
    }
    char ch;
    bool f =false;
    // first blue asle next asbe red
    // red asle blue ans
    // sudu red asle red
    // sudu blue asle blue
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[i][j]!='.')
            {
                ch=a[i][j];
                f=true;
                break;
            }
        }
        if(f)   break;
    }
    
    if(ch=='B' && f1==true){
        cout<<"R"<<nl;
    }
    else if(ch =='R' && f2==true){
        cout<<"B"<<nl;
    }
    else if(ch=='R' && f2!=true){
        cout<<"R"<<nl;
    }
    else{
        cout<<"B"<<nl;
    }
}

int main()
{
    fast_io;
    int t=1;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}