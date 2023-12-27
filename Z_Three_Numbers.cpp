#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    //fast_io;
        ll x,k;
        cin>>x>>k;
        ll cn=0;

        for(int i=0;i<=x;i++){
            for(int j=0;j<=x;j++){
                if(k-i-j>=0 && k-i-j<=x){
                    cn++;
                }
            }
        }
        cout<<cn<<endl;
    return 0;
}

