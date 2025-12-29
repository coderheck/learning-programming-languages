#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
#define tname "ancestor"
const ll maxN=100005;
ll n,m,tt=1,lvl[maxN],lst[maxN];
struct pll{
	ll u,v;
	bool operator<(const pll &rhs)const{return u<rhs.u;} // sort theo first
};
vector<vector<ll>>g(maxN); 
vector<set<pll>>lvls(maxN); // các node tại mỗi tầng 
ll dfs(const ll &u){
	if(!g[u].size()){lst[u]=tt++;return lst[u];}
	for(const ll &v:g[u]){
		lst[u]=max(lst[u],dfs(v)); // lấy max index của các node con 
	}
	return lst[u];
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=2;i<=n;i++){
		ll par;cin>>par;
		g[par].push_back(i);
	}
	dfs(1); // dfs từ gốc của cây
	queue<pll>q;
	q.push({1,1}); // bắt đầu từ node 1 có độ sâu level = 1
	while(q.size()){
		ll u=q.front().u;
		lvl[u]=q.front().v;
		q.pop();
		lvls[lvl[u]].insert({lst[u],u}); // đưa node vào danh sách node tại độ sâu lvl[u]
		for(const ll &v:g[u]){q.push({v,lvl[u]+1});} // duyệt với độ sâu lvl[u] + 1
	}
	while(m--){
		ll u,k,lv;cin>>u>>k;
		lv=lvl[u]-k; // tính độ sâu cần của node đích
		// chặt trên độ sâu lv để tìm node bao quát index của u
		cout<<(lv<1 ? -1 : lvls[lv].lower_bound({lst[u],0})->v)<<"\n";
	}
}
