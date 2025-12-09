#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;
#define ll long long 
#define tname "escape"
const ll maxN=105;
ll n,m,sx,sy,tx,ty,mx[4]={0,1,0,-1},my[4]={1,0,-1,0};
struct pos{ll x,y;}par[maxN][maxN];
string g[maxN];bool vis[maxN][maxN];
bool bfs(){
	queue<pos>q;
	q.push({sx,sy}),vis[sx][sy]=true;
	while(q.size()){
		ll ux=q.front().x,uy=q.front().y;q.pop();
		if((ux==1||uy==1||ux==m||uy==n)&&g[ux][uy]!='X'){
			cout<<"YES\n";
			tx=ux,ty=uy;
			return true;
		}
		for(ll i=0;i<4;i++){
			ll vx=ux+mx[i],vy=uy+my[i];
			if(vx<1||vx>m||vy<1||vy>n){continue;}
			if(g[vx][vy]=='X'){continue;}
			if(!vis[vx][vy]){
				vis[vx][vy]=true,q.push({vx,vy}),par[vx][vy]={ux,uy};
			}
		}
	}
	cout<<"NO";
	return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;cin.ignore();
	for(ll i=1;i<=m;i++){
		getline(cin,g[i]);
		g[i]="#"+g[i];
		for(ll j=1;j<=n;j++){
			if(g[i][j]=='E'){sx=i,sy=j;}
		}
	}
	if(!bfs()){return 0;}
	stack<pos>st;
	for(pos a={tx,ty};;a=par[a.x][a.y]){
		st.push(a);
		if(a.x==sx&&a.y==sy){break;}
	}
	while(st.size()){cout<<st.top().x<<" "<<st.top().y<<"\n";st.pop();}
}
