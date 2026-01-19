#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "drawrect"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
using namespace std;
const ll maxN=1005;
ll m,n,q,dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
struct pll{ll x,y;};
bool mark[maxN][maxN],vis[maxN][maxN];
bool good(const ll& x,const ll& y){return!(x<1||y<1||x>m||y>n||vis[x][y]||mark[x][y]);}
void bfs(const ll &x,const ll &y){
	queue<pll>q;
	q.push({x,y});vis[x][y]=true;
	while(q.size()){
		ll u=q.front().x,v=q.front().y;q.pop();
		for(ll i=0;i<4;i++){
			ll nu=u+dx[i],nv=v+dy[i];
			if(good(nu,nv)){vis[nu][nv]=true;q.push({nu,nv});}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n>>q;
	for(ll i=1;i<=q;i++){
		ll x1,y1,x2,y2,res=0;cin>>x1>>y1>>x2>>y2;
		memset(vis,false,sizeof vis);
		if(x1==x2){
			for(ll y=min(y1,y2);y<=max(y1,y2);y++){mark[x1][y]=true;}
		}else{
			for(ll x=min(x1,x2);x<=max(x1,x2);x++){mark[x][y1]=true;}
		}
		for(ll x=1;x<=m;x++){
			for(ll y=1;y<=n;y++){
				if(!vis[x][y]&&!mark[x][y]){
					res++;
					bfs(x,y);
				}
			}
		}
		cout<<res<<"\n";
		cerr<<res<<"\n";
	}
}
