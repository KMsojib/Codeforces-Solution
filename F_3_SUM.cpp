//https://codeforces.com/problemset/problem/1692/F


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


bool is_3(ll sum)
{
    string s = to_string(sum);
    if(s[s.size()-1] =='3')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(){
    ll n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //brute force apply
    bool f = false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll sum = a[i]+a[j]+a[j+1];
            if(is_3(sum))
            {
                f=true;
                break;
            }
            
            
        }
        if(f)
        {
            break;
        }
    }

    if(f)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
