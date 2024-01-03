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
        string s;
        cin>>s;
        cout<<s[0];
        int i;
        for(i=1;i<s.size();i++){
            char x = s[i];
            if((x-'0')>=1 && (x-'0')<=9){
                break;
            }
            else{
                cout<<s[i];
            }
        }
        if(s[i-1]>='a' && s[i-1]<='z')
        {
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
