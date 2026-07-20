// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "thhv25_dx10_10_a"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=1000005,maxP=1000000,inff=1LL<<62;
ll rev(ll a){
	if(a<10){return 0;}
	ll r=0;
	while(a){r=r*10+a%10;a/=10;}
	return r;
}
bool pr[maxN];
ll T,a,b,cnt[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
	for(ll i=1,j;i<=maxP;i++){
		j=rev(i);
		cnt[i]=cnt[i-1]+(!pr[i] && !pr[j] && i!=j);
	}
	cin>>T;
	while(T--){
		cin>>a>>b;
		lout(cnt[b]-cnt[a-1]);
	}
}
