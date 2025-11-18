#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define ll long long 
#define tname "vbgrass"
#define pll pair<ll,ll>
const ll maxN=105;
ll r,c,res=0,dx[]={-1,0,1,0},dy[]={0,1,0,-1};
char a[maxN][maxN];
bool vis[maxN][maxN];
bool good(const ll& x,const ll& y){return!(x<1||y<1||x>r||y>c||vis[x][y]||a[x][y]=='.');}
void bfs(const ll& x,const ll& y){
	res++;
	queue<pll>q;
	q.push({x,y});vis[x][y]=true;
	while(q.size()){
		ll u=q.front().first,v=q.front().second;q.pop();
		for(ll i=0;i<4;i++){
			ll nu=u+dx[i],nv=v+dy[i];
			if(good(nu,nv)){vis[nu][nv]=true;q.push({nu,nv});}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>r>>c;
	for(ll i=1;i<=r;i++){
		for(ll j=1;j<=c;j++){cin>>a[i][j];}
	}
	for(ll i=1;i<=r;i++){
		for(ll j=1;j<=c;j++){
			if(!vis[i][j]&&a[i][j]=='#'){bfs(i,j);}
		}
	}
	cout<<res;
}
