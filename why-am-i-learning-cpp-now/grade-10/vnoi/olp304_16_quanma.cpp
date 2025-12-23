#include <iostream>
#include <queue>
using namespace std;
#define ll long long 
#define tname "QUANMA"
const ll maxN=1005,inff=100000000007;
ll n,m,res=0,sx,sy,tx,ty,	dx[8]={-2, -1, 1, 2, 2, 1, -1, -2},
							dy[8]={1, 2, 2, 1, -1, -2, -2, -1};
struct pos{ll x,y;};
bool vis[maxN][maxN];
bool good(const ll& x,const ll& y){
	return!(x<1||y<1||x>n||y>m||vis[x][y]);
}
void bfs(){
	queue<pos>q;
	vector<vector<ll>>d(n+5,vector<ll>(m+5,inff));
	q.push({sx,sy});vis[sx][sy]=true,d[sx][sy]=0;
	while(q.size()){
		ll ux=q.front().x,uy=q.front().y;q.pop();
		if(ux==tx&&uy==ty){cout<<d[ux][uy];return;}
		for(ll i=0;i<8;i++){
			ll vx=ux+dx[i],vy=uy+dy[i];
			if(good(vx,vy)){
				// vis[vx][vy]=true;
				if(d[vx][vy]>d[ux][uy]+1){
					d[vx][vy]=d[ux][uy]+1;
					q.push({vx,vy});
				}
			}
		}
	}
	cout<<"-1";
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>sx>>sy>>tx>>ty;
	bfs();
}

