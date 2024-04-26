#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int max_dif = a[n-1]-a[0];
        int las_val = a[n-1];
        
        int cn = 2;
        for(int i = 1; i < n-1; i++){
            if(las_val-a[i] == max_dif){
                cn+=2;
            }
        }
        cout<<cn<<endl;
        
    }

    return 0;
}
