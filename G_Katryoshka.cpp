#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    long long a,b,c;
    cin>>a>>b>>c;
    long long ans=0;
    // jodi kno eye or mouth or body na thake tahole amra kicu build korte parbo na
    if(a==0 || c==0){
        cout<<"0\n";
    }

    else{
        //amra minimum je body element ta ace oita porjanto Katryoshkas make korte parbo
        long long mini=min(min(a,b),c);
        // tahole amdr prottekta element theke minimum take bad deye dete hobe
        a-=mini;
        b-=mini;
        c-=mini;

        ans+=mini; // amra only minimum element use kore Katryoshkas make korte parbo.
        ans+=min(a/2,c); // se conditin 1 & 2 oi khane 2eye use kore thats why a/2

        cout<<ans<<endl;

    }

    return 0;
}
