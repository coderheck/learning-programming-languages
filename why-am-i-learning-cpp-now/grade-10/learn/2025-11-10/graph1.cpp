#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define taskName "graph1"
const ll maxN=1005;
ll n,u,k,v;
int main(){
	if(fopen(taskName".inp","r")){
		freopen(taskName".inp","r",stdin);
		freopen(taskName".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	vector<vector<ll>>mat(maxN,vector<ll>(maxN));
	for(ll i=1;i<=n;i++){
		cin>>u>>k;
		while(k--){cin>>v;mat[u][v]=1;}
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){cout<<mat[i][j]<<" ";}
		cout<<"\n";
	}
}
