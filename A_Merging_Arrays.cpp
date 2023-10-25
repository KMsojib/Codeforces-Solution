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
        int n,k;    cin>>n>>k;
        vector<int>a(n),b(k);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>ans(n+k,0);
        int i=0,j=0;
        while(i<a.size() || j<b.size()){
            if(j==b.size() || i<a.size() && a[i]<a[j]){
                ans.push_back(a[i]);
                cout<<a[i]<<" ";
                i++;
            }
            else{
                ans.push_back(b[j]);
                cout<<b[i]<<" ";
                j++;
            }
        }
    }

    return 0;
}
