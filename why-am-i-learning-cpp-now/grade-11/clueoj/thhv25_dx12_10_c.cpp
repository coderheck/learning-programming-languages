// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <cmath>
using namespace std;
#define tname "thhv25_dx12_10_c"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define txp(x) (1<<(x))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,maxLog=17,maxP=100000;
bool pr[maxP+5];
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
}
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll n,a[maxN];
bool incc=true,decc=true;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>a[1];
	for(ll i=2;i<=n;i++){
		cin>>a[i];
		if(incc&&!(a[i]>=a[i-1])){incc=false;}
		if(decc&&!(a[i]<=a[i-1])){decc=false;}
	}
	if(n<=1000){ // sub 1: gcd(minA,maxA) == 1
		ll res=0;
		for(ll l=1;l<=n;l++){
			ll minn=a[l],maxx=a[l];
			for(ll r=l;r<=n;r++){
				minn=min(minn,a[r]);
				maxx=max(maxx,a[r]);
				if(gcd(minn,maxx)==1){res++;}
			}
		}
		lout(res);
		return 0;
	}else{ // :pray: :pray: :pray:
		ll res=0;
		// for(ll l=1;l<=n;l++){
		// 	for(ll r=l;r<=n;r++){
		// 		res+=(gcd(a[l],a[r])==1);
		// 	}
		// }
		lout(res);
		return 0;
	}
}
