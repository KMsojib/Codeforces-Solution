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
        ll n;
        cin>>n;
        vector<int>a(n);
        int zero=0,neg=0;
        ll product = 1;
        for(int i=0;i<n;i++) //O(N)
        {
            cin>>a[i];
            zero += (a[i]==0);
            neg += (a[i]<0);
            
        }
        if(zero || neg%2)
        {
            cout<<0<<endl;
        }
        else
        {
            int idx=0;
            for(int i=0;i<n;i++){ //O(N)
                if(a[i]>0){
                    idx = i;
                    break;
                }
            }
            cout<<1<<endl;
            cout<<idx+1<<" "<<0<<endl;
        }
    }

    return 0;
}

