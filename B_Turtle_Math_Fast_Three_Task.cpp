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
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            sum+=x;
            mp[x%3]++;
        }

        if(sum%3 == 0){
            cout<<"0\n";
        }
        else if(sum%3 == 2 || sum%3 == 1 && mp[sum%3]){
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }

    return 0;
}
