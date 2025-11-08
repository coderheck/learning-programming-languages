#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=5005,fuck=1000000000007;
ll n,m,k,u,v,l,res=1000000000007,resc=0,d[maxN],cnt[maxN];
struct edge{ll v,l;};
vector<vector<edge>>graph(maxN);
bool cmp(const edge& a,const edge& b){return a.v>b.v;}
void boyfriend(const ll& u){
	priority_queue<edge,vector<edge>,cmp>pq;
	q.push(1);d[1]=1;
	while(q.size()){
		u=q.front();q.pop();

		if(u==n){
			cout<<"possible\n";
		}
		for(edge nxt:graph[u]){
			v=nxt.v;
			if(d[v]==0){
				d[v]=d[u]+nxt.l;
				q.push(nxt.v);
			}
		}
	}
}
int main(){
	if(fopen("school.inp","r")){
		freopen("school.inp","r",stdin);
		// freopen("school.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>k>>u>>v>>l;
		graph[u].push_back({v,l});
		if(k==2){graph[v].push_back({u,l});}
	}
	for(ll i=1;i<=n;i++){d[i]=fuck,cnt[i]=0;}
	boyfriend();
	cout<<d[n]<<" "<<cnt[n];
}
