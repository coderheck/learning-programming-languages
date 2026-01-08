#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
#define tname "seqbal"
const ll maxN=100005;
ll n,res=0,a[maxN],sum[maxN];
umap<ll,ll>pos;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	sum[0]=pos[0]=0;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(!a[i]){a[i]=-1;}
		sum[i]=sum[i-1]+a[i];
		if(pos.count(sum[i])){
			ll len=i-pos[sum[i]];
			if(len>res){res=len;}
		}else{
			pos[sum[i]]=i;
		}
	}
	cout<<res;
}

