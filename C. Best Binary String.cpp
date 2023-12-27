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
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                if(ans.back()=='1'){
                        char a='1';
                    ans.push_back(a);
                }
                else{
                    char b='0';
                    ans.push_back(b);
                }
            }
            else{
                char c=s[i];
                ans.push_back(c);
            }

        }
        cout<<ans<<endl;
    }

    return 0;
}
