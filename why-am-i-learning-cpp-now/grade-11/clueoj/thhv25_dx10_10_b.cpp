// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
#define tname "thhv25_dx10_10_b"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=500005,maxP=31623,inff=1LL<<62;
ll n,a[maxN],lis[maxN],lc=0,prc=0,prs[maxP+5];
bool pr[maxP+5];
ll demuoc(ll n){
	if(n==1){return 1;}
	// sub 1,2,3: đếm ước trong O(sqrt(n))
	//
	// ll r=0;
	// for(ll i=1,j;i<=n;i++){
	// 	if(n%i==0){
	// 		r++;
	// 		ll j=n/j;
	// 		if(i!=j){r++;}
	// 	}
	// }

	// sub 4
	int r=1;
	for(ll i=0,c,p;i<prc;i++){
		p=prs[i];
		if(1LL*p*p>n){break;}
		if(n%p==0){
			c=0;
			while(n%p==0){c++;n/=p;}
			r*=c+1;
		}
	}
	if(n>1){r<<=1;}
	return r;
}
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
	for(ll i=2;i<=maxP;i++){
		if(!pr[i]){prs[prc++]=i;}
	}
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1,cc,pos;i<=n;i++){
		cc=demuoc(a[i]);
		pos=lower_bound(lis,lis+lc,cc)-lis;
		if(pos==lc){lis[lc++]=cc;}else{lis[pos]=cc;}
	}
	lout(lc);
}

