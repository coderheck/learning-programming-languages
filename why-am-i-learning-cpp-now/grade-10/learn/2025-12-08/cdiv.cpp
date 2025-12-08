#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
#define tname "cdiv"
const ll maxN=5000005,modN=123456789,maxP=3000000;
ll n,k,a[maxN],mk[maxP+5],tmp=1;
bool pr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i<=maxP;i++){
		if(!pr[i]){
			mk[i]=i; 
			for(ll j=i+i;j<=maxP;j+=i){
				if(!mk[j]){mk[j]=i;} // đánh dấu ước nhỏ nhất
				pr[j]=true;
			}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		tmp*=a[i];
	}
	if(tmp<=1000000000000){
		ll res=0;
		for(ll i=1;i*i<=tmp;i++){
			if(tmp%i==0){
				res++;
				ll j=tmp/i;
				res+=j!=i;
			}
		}
		cout<<res;
		return 0;
	}
	prSieve();
	umap<ll,ll>exp;
	for(ll i=1;i<=n;i++){
		while(a[i]>1){
			ll x=mk[a[i]];
			exp[x]++,a[i]/=x;
		}
	}
	ll res=1; // mọi số chia hết cho 1
	for(ll i=2;i<=maxP;i++){
		if(!pr[i]){
			res=(res*(exp[i]+1))%modN;
		}
	}
	cout<<res;
}
