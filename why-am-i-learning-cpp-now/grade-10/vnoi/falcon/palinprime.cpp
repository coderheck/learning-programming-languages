#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define tname "palinprime"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxP=120;
bool pr[maxP+5];
vector<ll>res;
ll dsum(ll x){
	ll s=0;
	while(x){s+=x%10,x/=10;}
	return s;
}
void cook(const ll& lim){
	for(ll len=1;len<=12;len++){
		ll half=(len+1)/2,st=pow(10,half-1),nd=pow(10,half)-1;
		if(len==1){st=0;}
		for(ll i=st;i<=nd;i++){
			string s=to_string(i),r=s;
			reverse(r.begin(),r.end());
			if(len%2){r.erase(r.begin());}
			string full=s+r;
			ll val=stoll(full);
			if(val>lim){break;}
			res.push_back(val);
		}
	}
}
ll a,b,ans=0;
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
	cin>>a>>b;
	cook(b);
	for(ll i=0;i<res.size();i++){
		ans+=(res[i]>=a&&res[i]<=b&&!pr[dsum(res[i])]);
	}
	lout(ans);
}
