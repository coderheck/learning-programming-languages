#include <iostream>
#include <vector>
#include <cmath>
#define min(a,b) ((a)<(b)?(a):(b))
using namespace std;
#define ll long long 
#define txp(x) (1<<(x))
const ll maxN=200005,maxLog=18;
ll n,q,a[maxN];
struct sptable{
	ll sz;vector<vector<ll>>sp;
	sptable(const ll &__n):sz(__n){
		sp.assign(maxLog,vector<ll>(sz+5));
		for(ll i=1;i<=sz;i++){sp[0][i]=a[i];}
		for(ll e=1;e<=log2(sz);e++){
			for(ll i=1;i+txp(e)-1<=sz;i++){
				sp[e][i]=min(sp[e-1][i],sp[e-1][i+txp(e-1)]);
			}
		}
	}
	ll quer(const ll &l,const ll &r){
		ll k=log2(r-l+1);
		return min(sp[k][l],sp[k][r-txp(k)+1]);
	}
};
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	sptable sp(n);
	while(q--){
		ll l,r;cin>>l>>r;
		cout<<sp.quer(l,r)<<"\n";
	}
}
