#include <iostream>
#include <algorithm>
using namespace std;
#define tname "capso"
#define ll long long 
#define lout(x) \
	cout<<x<<"\n"; \
	cerr<<x<<"\n";
const ll maxN=10000005;
int n,m,a[maxN],b[maxN],res=0,stb[maxN],ndb[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=1;i<=m;i++){cin>>b[i];}
	sort(a+1,a+n+1);sort(b+1,b+m+1);
	for(int i=1;i<=m;i++){
		if(!stb[b[i]]){stb[b[i]]=i;}
		ndb[b[i]]=i;
	}
	for(ll i=1;i<=n;i++){
		if(stb[a[i]]){
			res+=(ndb[a[i]]-stb[a[i]]+1);
		}
	}
	lout(res);
}
