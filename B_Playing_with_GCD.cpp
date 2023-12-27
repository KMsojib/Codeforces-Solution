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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n+1);
        b[0]=a[0];
        /*
        formula:
        lcm(a,b)=(a*b)/gcd(a,b);
        */
        for(int i=0;i<n;i++){
            int g=__gcd(a[i],a[i+1]);
            int fact=a[i]*a[i+1];
            b[i+1]=fact/g;
        }
        b[n]=a[n-1];
        bool f=true;
        for(int i=0;i<n;i++){
            int gcd=__gcd(b[i],b[i+1]);
            if(gcd!=a[i]){
                f=false;
                break;
            }
        }
        if(f){
            YES;
        }
        else{
            NO;
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
/*
    int this problem:
        a[0] & a[n]  contribute one time means
            a[i]=gcd(b[i],b[i+1]),
            a[i+1]=gcd(b[i+1],b[i+2])
            ........................
            a[n]=gcd(b[n],b[n+1])//
            look i b[i] & b[n+1] contribute one time. so we just add a[0] & a[n]
            int b array
            then take the LCM of a[i],a[i+1] because it give us the factor of these element
            then loop over the b array find
                if(gcd(b[i],b[i+1])==a[i])  continue;
                else break. there are no element
            
*/
//YouKn0wWho solution
#include<bits/stdc++.h>
using namespace std;


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    bool ok = true;
    for (int i = 2; i < n; i++) {
      if (a[i] % __gcd(a[i - 1], a[i + 1])) {
        ok = false;
      }
    }
    if (ok) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}