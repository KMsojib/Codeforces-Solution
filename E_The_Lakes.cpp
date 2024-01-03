#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int dx[] = {1,0,0,-1};
int dy[] = {0,-1,1,0};
int n,m;
const int N = 1111;
int a[N][N];
bool vis[N][N];

bool IsSafe(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]!=0 && vis[x][y]!=true){
        return true;
    }
    else{
        return false;
    }
}

int dfs(int x,int y){
    int res = a[x][y];
    vis[x][y]=true;
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(IsSafe(nx,ny)){
            res+=dfs(nx,ny);
        }
    }
    return res;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                vis[i][j]=false;
            }
        }

        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]!=0 && vis[i][j]!=true){
                    sum=max(sum, dfs(i,j));
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
