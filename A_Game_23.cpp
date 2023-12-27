#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll left, right;
    cin>>left>>right;

    if(right%left!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll cn=0;
        ll d = right/left;
        while (d%2==0)
        {   
            cn++;
            d/=2;
        }

        while (d%3==0)
        {
            d/=3;
            cn++;
        }

        if(d!=1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<cn<<endl;
        }
        
        
    }
    return 0;
}