#include <iostream>
#include <cmath>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
// #define abs(x) ((x)<(0)?(x)*(-1):(x))
const ll maxN=100005;
const ll maxP=1000010;
const ll inf=1000000000007;
bool pr[maxP+5];
ll pn[maxP],pc=0,cnt[maxP];
ll bitchsearch(ll& x){
	ll l=0,r=pc-1,m,res=inf;
	while(l<=r){
		m=(l+r)>>1;
		res=min(res,abs(x-pn[m]));
		if(pn[m]>x){r=m-1;}else{l=m+1;}
	}
	return res;
}
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
	for(ll i=2;i<=maxP;i++){if(!pr[i]){pn[pc++]=i;}}
}
ll n,k,a[maxN],res=0;
void slidewindow(){
	for(ll i=1;i<=k;i++){res+=a[i];}
	ll cur=res;
	for(ll i=k+1;i<=n;i++){
		cur+=a[i]-a[i-k];
		res=min(res,cur);
	}
	cout<<res;
}
int main(){
	if(fopen("biendoi.inp","r")){
		freopen("biendoi.inp","r",stdin);
		freopen("biendoi.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	prSieve();
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){a[i]=bitchsearch(a[i]);}
	slidewindow();
}
