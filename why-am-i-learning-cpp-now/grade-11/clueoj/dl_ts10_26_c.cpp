#include <iostream>
using namespace std;
#define tname "dl_ts10_26_c"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=100005,inff=1ll<<60;
ll n,q,t[100005],p[maxn];
bool a[maxn];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=100000;i++){
		for(ll j=i;j<=100000;j+=i){t[j]+=i;}
	}
	for(ll i=1,x;i<=n;i++){cin>>x;a[i]=(t[x]%3==0);}
	for(ll i=1;i<=n;i++){p[i]=p[i-1]+a[i];}
	for(ll qq=1,l,r,k;qq<=q;qq++){
		cin>>l>>r>>k;
		lout(((p[r]-p[l-1]>=k)?"YES":"NO"));
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

