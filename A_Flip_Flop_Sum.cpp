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
        int n;  cin>>n;
        int sum=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        bool cons=false,neg=false;
        for(int i=0;i<n;i++){
            if(i+1<n && a[i]==-1 && a[i+1]==-1){
                cons=true;
            }
            if(a[i]==-1){
                neg=true;
            }
        }
        if(cons){
//            sum-=(-2);
//            sum+=2;
              sum+=4;
        }
        else if(!neg){
            sum-=4;
        }
        cout<<sum<<"\n";
    }
    return 0;
}

