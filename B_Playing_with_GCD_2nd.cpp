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
        int n;  cin>>n;
        vector<int>a(n+2,1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>b(n+2,1);
        for(int i=1;i<=n+1;i++){
            int g=__gcd(a[i],a[i-1]);
            int fact=a[i]*a[i-1];
            b[i]=fact/g;
        }
        bool f=true;
        for(int i=1;i<=n;i++){
            int gcd=__gcd(b[i],b[i+1]);
            if(gcd!=a[i]){
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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
