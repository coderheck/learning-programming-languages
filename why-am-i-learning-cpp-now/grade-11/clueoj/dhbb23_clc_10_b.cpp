#include <iostream>
using namespace std;
#define tname "dhbb23_clc_10_b"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=100005,inff=1ll<<60;
ll n,s,a[maxn],p[maxn],res=0;
struct ft{
	ll bit[maxn];
	void add(ll i,ll d){
		for(;i<=n;i+=i&-i){bit[i]+=d;}
	}
	void build(){
		for(ll i=1;i<=n;i++){add(i,p[i]);}
	}
	ll get(ll i){
		ll ret=0;
		for(;i>=1;i-=i&-i){ret+=bit[i];}
		return ret;
	}
};
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s;
	for(ll i=1;i<=n;i++){cin>>a[i];a[i]=(a[i]>=s?1:-1);}
	for(ll i=1;i<=n;i++){
		p[i]=p[i-1]+a[i];
	}
	for(ll i=1;i<=n;i++){oout(p[i]);}
	lout(" ");
	// ft aa;aa.build();
	for(ll i=1;i<=n;i++){
		for(ll j=i;j<=n;j++){
			if(p[j]-p[i-1]>=0){lout(i<<" "<<j);res++;};
		}
	}
	lout(res);
	// lout(aa.get(n));
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
