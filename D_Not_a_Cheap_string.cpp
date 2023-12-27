
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl cout<<endl

bool compare(pair<char,int>a, pair<char,int>b)
{
    return (a.first>b.first);
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        int p;  cin>>p;
        int n=s.size();
        vector<pair<char,int>>v;
        ll cost=0;
        for(int i=0;i<n;i++){
            v.push_back({s[i],i});
            cost+=s[i]-96;
        }

        vector<int>index(n+1,0);
        sort(v.begin(),v.end(),compare);
        for(auto [x,y] : v){
            if(cost<=p){
                break;
            }
            cost-=(x-96);
            index[y]=-1;
        }

        for(int i=0;i<n;i++){
            if(index[i]!=-1){
                cout<<s[i];
            }
        }
        nl;
    }

    return 0;
}
