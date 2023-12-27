#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fast_io;
    int n;  cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cn=0,maxi=INT_MIN,sum=0;
    for( int i=0;i<n;i++ ){
        if( a[i]==0 ){
            sum++;
        }
        else{
            sum--;
            cn++;
        }

        if(sum>maxi){
            maxi=sum; //it my longest segment
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<cn+maxi<<endl;
    return 0;
}