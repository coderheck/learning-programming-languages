#include <iostream>
#include <vector>
#include <utility>
using namespace std;
#define ll long long 
#define st first
#define nd second 
const ll maxN=1000005;
const ll max1=1000000;
ll m,a,b;
int main(){
	if(fopen("uocso.inp","r")){
		freopen("uocso.inp","r",stdin);
		freopen("uocso.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m;
	vector<pair<ll,ll>>fs;
	for(ll i=1;i<=m;i++){
		cin>>a>>b;
		fs.push_back({a,b});
	}
	ll ans,cnt,tmp;bool div;
	for(ll i=1;i<=3;i++){
		cin>>a>>b;
		ans=0;
		for(ll x=a;x<=b;x++){
			tmp=x,div=true;
			for(auto& fact:fs){
				cnt=0;
				while(tmp%fact.st==0){
					cnt++;tmp/=fact.st;
					if(cnt>fact.nd){div=false;break;}
				}
				if(!div){break;}
			}
			ans+=(div&&tmp==1);
		}
		cout<<ans<<"\n";
	}
}
