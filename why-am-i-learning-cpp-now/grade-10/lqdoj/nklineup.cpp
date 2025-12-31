#include <iostream>
#include <cmath>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define txp(x) (1<<(x))
const ll maxN=50005,maxLog=16;
ll n,q,a[maxN],stmin[maxLog][maxN],stmax[maxLog][maxN];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){stmin[0][i]=stmax[0][i]=a[i];}
	for(ll e=1;e<=log2(n);e++){
		for(ll i=1;i+txp(e)-1<=n;i++){
			stmin[e][i]=min(stmin[e-1][i],stmin[e-1][i+txp(e-1)]);
			stmax[e][i]=max(stmax[e-1][i],stmax[e-1][i+txp(e-1)]);
		}
	}
	while(q--){
		ll l,r,k;cin>>l>>r;
		k=log2(r-l+1);
		cout<<max(stmax[k][l],stmax[k][r-txp(k)+1])-min(stmin[k][l],stmin[k][r-txp(k)+1])<<"\n";
	}
}
