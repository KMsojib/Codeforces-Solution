#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int sum = a[i]+a[j]+a[k];
                if(sum == a[i] || sum == a[j] || sum == a[k]){
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
    return;
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
//https://codeforces.com/problemset/problem/1698/C