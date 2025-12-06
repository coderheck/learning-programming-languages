#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long
#define tname "lanhdia"
const ll maxN=1005;
ll n,m,g[maxN][maxN],res=0,mx[4]={0,-1,0,1},my[4]={1,0,-1,0};
bool inti[maxN][maxN],inbe[maxN][maxN];
struct vertex{ll x,y;};
void bfs(const ll& cc){
    queue<vertex>q;bool vis[maxN][maxN];
    q.push({1,1});vis[1][1]=true;
    q.push({1,m});vis[1][m]=true;
    q.push({n,1});vis[n][1]=true;
    q.push({n,m});vis[n][m]=true;
    while(q.size()){
        ll ux=q.front().x,uy=q.front().y;q.pop();
        // if(g[ux][uy]!=cc&&g[ux][uy]!=0){continue;}
        for(ll i=0;i<4;i++){
            ll vx=ux+mx[i],vy=uy+my[i];
            if(vx<1||vx>n){continue;}
            if(vy<1||vy>m){continue;}
            if(g[vx][vy]!=cc&&g[vx][vy]!=0){continue;}
            if(!vis[vx][vy]){
                (cc==2?inti:inbe)[vx][vy]=false;
                vis[vx][vy]=true;
                q.push({vx,vy});
            }
        }
    }
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    memset(inti,true,sizeof inti);
    memset(inbe,true,sizeof inbe);
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){cin>>g[i][j];}
    }
    bfs(2); // tìm vùng không thuộc lãnh thổ của hổ
    bfs(1); // 
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            res+=inti[i][j]&&inbe[i][j];
        }
    }
    cout<<res;
}