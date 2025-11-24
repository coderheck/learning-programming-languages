// http://laptrinh.ntu.edu.vn/Problem/Details/51
#include <iostream>
using namespace std;
#define ll long long 
#define tname "ocse"
const ll maxN=105;
ll n,m,y,x,my[]={-1,1,0,0},mx[]={0,0,-1,1},res=0,graph[maxN][maxN];
bool vis[maxN][maxN];
bool check(const ll& u,const ll& v){return!(u<1||v<1||u>n||v>m||vis[u][v]||graph[u][v]);}
void dfs(const ll& u,const ll& v){
	vis[u][v]=true,res++;
	for(ll i=0;i<4;i++){
		ll nu=u+mx[i],nv=v+my[i];
		if(check(nu,nv)){dfs(nu,nv);}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);	
	cin>>n>>m>>y>>x;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){cin>>graph[i][j];}
	}
	dfs(y,x);
	cout<<res;
}

/* 
4 5 2 4
0 0 1 0 0 
0 1 0 0 1
1 0 0 0 0
0 1 0 0 1

10
*/
