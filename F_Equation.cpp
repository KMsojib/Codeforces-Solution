#include<bits/stdc++.h>
using namespace std;

long long power_of(long long x, long long y)
{
    long long sum=1;
    for(int i=0;i<y;i++)
    {
        sum*=x;
    }
    return sum;
}

int main()
{
    int x,n;
    cin>>x>>n;
    long long sum=0;
    if(n%2)
    {
        n--;
    }

    //sum+=(x*0)-1;
    for(int i=0;i<=n;i+=2)
    {
        sum+=power_of(x,i);
        //cout<<x<<" "<<i<<" "<<sum<<endl;
    }
    cout<<sum-1<<endl;
}


