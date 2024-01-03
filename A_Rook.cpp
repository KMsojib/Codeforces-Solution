
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string st = "abcdefgh";
        string s;
        cin>>s;
        int ch = s[1]-'0';
        for(int i=1; i<=8;i++)
        {
            if(ch != i)
                cout<<s[0]<<i<<endl;
        }

        for(int i=0;i<st.size();i++)
        {
            if(s[0] != st[i])
                cout<<st[i]<<ch<<endl;
        }
    }

    return 0;
}
/* 
d1
d2
d3
d4
d6
d7
d8
a5
b5
c5
e5
h5


*/
