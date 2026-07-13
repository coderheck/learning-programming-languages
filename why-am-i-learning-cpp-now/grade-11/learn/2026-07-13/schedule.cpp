// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
#define tname "schedule"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1LL<<62;
ll n,a[maxN],res=inff,bit[maxN];
ll countinv(const vector<ll>&p){
	ll c=0;
	for(size_t i=0;i<p.size();i++){
		for(size_t j=i+1;j<p.size();j++){
			if(p[i]>p[j]){c++;}
		}
	}
	return c;
}
void upd(ll x){
	while(x<=n){bit[x]++;x+=x&-x;}
}
ll fch(ll x){
	ll s=0;
	while(x){s+=bit[x];x-=x&-x;}
	return s;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	if(n<=8){
		// sub 1
		vector<ll>p(n);
		iota(p.begin(),p.end(),1);
		do{
			bool good=true;
			for(ll i=0;i<n;i++){
				if(i+1>a[p[i]]){good=false;break;}
			}
			if(good){res=min_(res,countinv(p));}
		}while(next_permutation(p.begin(),p.end()));
	}else{
		// sub 2:
		vector<ll>p(n+1);
		for(ll i=1;i<=n;i++){p[a[i]]=i;}
		for(ll i=n;i>=1;i--){
			res+=fch(p[i]-1);
			upd(p[i]);
		}

	}
	lout((res==inff?-1:res));
}
