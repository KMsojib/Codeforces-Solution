/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){

        fast_io;
        ll n,m,d;  cin>>n>>m>>d;
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;  cin>>x;
                v.push_back(x);
            }
        }

        sort(v.begin(),v.end());
        bool f=true;
        ll move=0;
        for(int i=0; i<n*m; i++){
            if(abs(v[i]-v[(n*m)/2])%d!=0){
                f=false;
            }
            else{
                move+=(abs(v[i]-v[(n*m)/2])/d);
            }
        }

        ll mini=INT_MAX;
        if(f){
            mini=min(mini,move);
        }
        if(mini == INT_MAX){
            mini=-1;
        }
        cout<<mini<<endl;
    return 0;
}
