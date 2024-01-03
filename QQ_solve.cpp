#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    int t=1;//cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long sum=0;
        long long x=s[0]-'0';
        long long y=s[2]-'0';
        sum+=x*y;
        cout<<sum<<"\n";
    }
    return 0;
}
