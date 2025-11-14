#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define TASKNAME "stn"
const ll maxN=1000000;
ll q,l,r;
ll demuoc(const ll &n){
	ll ret=0;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			ret+=i;
			ll j=n/i;
			if(i!=j){ret+=j;}
		}
	}
	return ret-n;
}
int main(){
	if(fopen(TASKNAME".inp","r")){
		freopen(TASKNAME".inp","r",stdin);
		freopen(TASKNAME"_rac.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>q;
	while(q--){
		cin>>l>>r;ll res=0;
		for(ll i=l;i<=r;i++){
			res+=demuoc(i)>=i;
		}
		cout<<res<<"\n";
	}
}

