/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

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
        string l,r;
        cin>>l>>r;
        ll ans=0;

        while (r.size()<l.size()){
            /* code */
            r="0"+r;
        }
        while (l.size()<r.size()){
            /* code */
            l="0"+l;
        }
        bool ok=false;
        for(int i=0;i<l.size();i++){
            
            if(ok){
                ans+=9LL;
                continue;
            }

            if(l[i]!=r[i]){
                ans+=abs((l[i]-r[i]));
                ok=true;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
/* check constraints
    * at first try a brute force way to solve
    * then optimization
 
    *  if its array:
        1. try greedy
        2. if it is a result of subproblems try dp
        3. if it is showing for  a range minimum or maximum
        3. 1 tttttffffff
     else
       3.2 ffffftttttt
        try binary search
*/
