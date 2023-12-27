/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[0]==a[1] && a[0]*4==a[2]){
            cout<<"YES\n";
            continue;
        }
        int cn=0;
        if(a[2]>a[0])   a[2]-=a[0],cn++;
        if(a[2]>a[0])   a[2]-=a[0],cn++;
        if(a[1]>a[0])   a[1]-=a[0],cn++;
        if(a[1]>a[0])   a[1]-=a[0],cn++;

        sort(a,a+3);
        if(a[0]==a[2] && cn<4){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
