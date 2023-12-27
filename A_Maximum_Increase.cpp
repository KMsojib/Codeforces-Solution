
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

bool all_equal(vector<int>a,int n)
{
    bool f = false;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            f=false;
        }
    }
    return f;
}

int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll cn=0;
        ll temp=-1;
        if(all_equal(a,n) or n==1)
        {
            cout<<1<<endl;
            return 0;
        }

        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                cn++;
                //cout<<"ok: "<<cn<<endl;
            }
            else
            {
                
                temp = max(cn,temp);
                cn=0;
                //cout<<"Not ok:cn "<<cn<<" temp: "<<temp<<endl;
            }
        }
        temp = max(temp,cn);
        cout<<temp+1<<endl;
    }

    return 0;
}