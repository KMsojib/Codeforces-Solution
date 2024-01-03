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
        ll n,k;
        cin>>n>>k;
        string s;   cin>>s;
        ll a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')   a++;
            else    b++;
        }

        if(b==k)
        {
            cout<<"0\n";
        }
        else if(k==0 && a==n)
        {
            cout<<1<<endl;
            cout<<a<<" "<<'B'<<endl;
        }
        else if(k==0 && b==n)
        {
            cout<<1<<endl;
            cout<<b<<" "<<'A'<<endl;
        }
        else if(b>k && b==n && a==0)
        {
            cout<<1<<endl;
            cout<<b-k<<" "<<'A'<<endl;
        }
        else if(b<k && a>b)
        {
            cout<<1<<endl;
            cout<<k-b<<" "<<'B'<<endl;
        }
        else if(b>k)
        {
            cout<<1<<endl;
            ll cn=0;
            ll idx=-1;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='A')
                {
                    idx = i;
                    break;
                }
            }
            idx++;
            cout<<n-idx<<" "<<'A'<<endl;
        }
    }

    return 0;
}
