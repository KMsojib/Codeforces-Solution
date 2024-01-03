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
        string s;   cin>>s;
        int b=0,B=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')   b++;
            if(s[i]=='B')   B++;
        }

        for(int i=s.size()-1; i>0;i--)
        {
            if(s[i]=='B')
        }
    }

    return 0;
}
