#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long l,r;
    cin>>l>>r;
    long long sum=0;
    for(int i=l;i<=r;i++){
        sum+=sum+r%i;
    }
    cout<<sum<<endl;
    return 0;
}