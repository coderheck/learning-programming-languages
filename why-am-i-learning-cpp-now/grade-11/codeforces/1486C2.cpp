// bitchsearch
// b1: tim second cua [1; n]
// b2: bsearch: 
//		? second mid = s => max trong [L; mid]
//				neu khong => [mid+1; R]
#include <iostream>
using namespace std;
#define tname "1486c2"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<60;
ll get(ll a,ll b){
	ll res;
	cout<<"? "<<a<<" "<<b<<endl;
	cin>>res;
	return res;
}
ll n,s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	s=get(1,n);
	ll l=1,r=n,mid=-1;
	while(l<r){
		mid=(l+r)>>1;
		if(s<mid){
			ll t=get(s,mid);
			if(t==s){r=mid;}else{l=mid+1;}
		}else{
			ll t=get(mid,s);
			if(t==s){l=mid;}else{r=mid-1;}
		}
	}
	cout<<"! "<<l<<endl;
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
