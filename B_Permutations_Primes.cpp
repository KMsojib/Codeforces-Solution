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
        int n;
        cin>>n;
        if(n<=2){
            if(n==1){
                cout<<"1\n";
            }
            else{
                cout<<"2 1\n";
            }
        }
        else{
            vector<int>a(n,0);
            a[0]=3;
            a[n-1]=2;
            a[n/2]=1;
            ll x=4;
            for(int i=1;i<=n;i++){
                if(a[i]==0){
                    a[i]=x;
                    x++
                }
            }

            in_range(0,n){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
    