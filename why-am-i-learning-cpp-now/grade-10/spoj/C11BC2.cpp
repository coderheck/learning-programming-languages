#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=10005;
ll n,m;
vector<vector<ll>>graph(maxN);
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n-1;i++){
		ll v,w;cin>>v>>w;
		if(!(i&1)){graph[i].push_back(v);graph[v].push_back(i);}
	}

}
