#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define tname "smartlight"
#define max(a,b) ((a)>(b)?(a):(b))
#define debug(x) cout<<"debug: "<<(x)<<"\n";
const ll maxP=1000000;
bool pr[maxP+5];ll cntpr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
	cntpr[0]=cntpr[1]=0;
	for(ll i=2;i<=maxP;i++){
		cntpr[i]=cntpr[i-1]+!pr[i];
	}
}
void segSieve(const ll &l,const ll &r){
	ll lim=sqrt(r),res=0;
	vector<bool>mark(lim+1,false);
	vector<ll>prs;
	for(ll i=2;i<=lim;i++){
		if(!mark[i]){
			prs.emplace_back(i);
			for(ll j=i*i;j<=lim;j+=i){mark[j]=true;}
		}
	}
	vector<bool>isPr(r-l+1,true);
	for(const ll &i:prs){
		// debug(a);
		for(ll j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
			isPr[j-l]=false;
		}
	}
	if(l==1){isPr[0]=false;}
	for(ll i=l;i<=r;i++){
		// if(isPr[i]){cout<<i<<" ";}
		res+=(i!=1&&isPr[i]);
	}
	cout<<res<<"\n";
}
ll t,l,r;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	prSieve();
	cin>>t;
	while(t--){
		cin>>l>>r;
		if(r<=maxP){
			cout<<cntpr[r]-cntpr[l-1]<<"\n";
		}else{
			segSieve(l,r);
		}
	}
}

