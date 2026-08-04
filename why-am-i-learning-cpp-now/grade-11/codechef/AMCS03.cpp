// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <iomanip>
using namespace std;
#define tname "AMCS03"
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
const ll maxN=100005,inff=1LL<<62;
ll n,k,res=0;
struct inp{ll s,d;}a[maxN];
double calc(const double &t){
	double maxx=-inff,minn=inff;
	for(ll i=1;i<=n;i++){
		double pos=a[i].s*t+a[i].d;
		if(pos>maxx){maxx=pos;}
		if(pos<minn){minn=pos;}
	}
	return maxx-minn;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i].s>>a[i].d;}
	double l=0.0,r=k*1.0;
	for(ll it=1;it<=100;it++){
		double m1=l+(r-l)/3.0,m2=r-(r-l)/3.0;
		if(calc(m1)<calc(m2)){r=m2;}else{l=m1;}
	}
	lout(fixed<<setprecision(6)<<calc(l));
}
