// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <vector>
using namespace std;
#define tname "backtrack_f"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";

const ll maxN=10;

ll fastpow(ll a,ll e){
	ll r=1;
	while(e){if(e&1){r*=a;} e>>=1,a*=a;}
	return r;
}
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}

ll n,m,x,res=0,a[maxN];
struct aa{ll u,v,g;}cc[maxN];
vector<ll>v;
ll cnt[maxN];

void backt(ll i){
	if(i==(ll)v.size()){res++;return;}
	ll u=v[i];
	for(ll val=1;val<=x;val++){
		bool ok=true;
		for(ll i=0;i<m;i++){
			aa c=cc[i];
			if(c.u==u||c.v==u){
				if(val%c.g){ok=false;break;}
				ll v = c.u==u ? c.v : c.u;
				if(a[v]&&gcd(val,a[v])!=c.g){ok=false;break;}
			}
		}
		if(ok){a[u]=val;backt(i+1);a[u]=0;}
	}
}

int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>x;
	for(ll i=0;i<m;i++){
		cin>>cc[i].u>>cc[i].v>>cc[i].g;
		cnt[cc[i].u]++,cnt[cc[i].v]++;
	}
	for(ll i=1;i<=n;i++){
		if(cnt[i]){v.push_back(i);}
	}
	backt(0);
	lout(res*fastpow(x,n-v.size()));
}

