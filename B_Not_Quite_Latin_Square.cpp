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
        map<char,int>mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                char ch;
                cin>>ch;
                mp[ch]++;
            }
        }
        for(auto [x,y] : mp)
        {
            if(y<3 && x!='?')
            {
                cout<<x<<endl;
            }
        }
    }

    return 0;
}
