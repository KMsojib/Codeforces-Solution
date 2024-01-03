#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    int t=1;//cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int x;  cin>>x;
            st.insert(x);
        }
        cout<<st.size()<<"\n";
    }
    return 0;
}

