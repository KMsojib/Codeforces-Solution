#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    int t=1;//cin>>t;
    while(t--)
    {
        map<string,bool>mp;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int cn=0;
        do{
            if(mp[s]==false)
            {
                cn++;
                mp[s]=true;
                  //cout<<s<<endl;
            }
        }while(next_permutation(s.begin(),s.end()));

        cout<<cn<<"\n";
    }
    return 0;
}


