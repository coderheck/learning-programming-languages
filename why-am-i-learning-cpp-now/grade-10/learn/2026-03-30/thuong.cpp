#include <iostream>
#include <unordered_map>
#include <utility>
#include <cstddef>
#include <vector>
using namespace std;
#define tname "thuong"
#define ll long long 
#define umap unordered_map
#define lout(x) \
	cout<<x<<" "; \
	cerr<<x<<" ";
const ll maxN=3000005;
ll n,m,a[maxN],b[maxN],res=0;
umap<ll,ll>cnta,cntb;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i];cnta[a[i]]++;}
	for(ll i=1;i<=m;i++){cin>>b[i];cnta[b[i]]=0;}
	vector<ll>rem;
	for(ll i=1;i<=n;i++){
		if(cnta[a[i]]>0){rem.push_back(a[i]);}
	}
	if(rem.empty()){lout("0");return 0;}
	umap<ll,ll>freq;
	for(const ll &x:rem){freq[x]++;}
	for(const pair<ll,ll>x:freq){res=max(res,x.first*x.second);}
	for(size_t i=0;i<rem.size();i++){
		lout(rem[i]);
	}
	lout("\n"<<res);
}
