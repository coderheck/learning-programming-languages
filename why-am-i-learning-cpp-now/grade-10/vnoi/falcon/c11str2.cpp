#include <iostream>
#include <string>
using namespace std;
#define ll long long 
const ll maxN=100000;
const ll modN=1000000007;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll collide=0,p[maxN+5],ha[maxN+5]={0},hb[maxN+5]={0};
void make(const string& s,ll* hash){
	ll n=s.size();
	for(ll i=1;i<=n;i++){
		hash[i]=(hash[i-1]*31+s[i-1]-'a'+1)%modN;
	}
}
ll getHsh(ll* hash,ll l,ll r){
	return(hash[r]-hash[l-1]*p[r-l+1]%modN+modN)%modN;
}
string a,b;
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>a>>b;
	p[0]=1;
	for(ll i=1;i<=max(a.size(),b.size());i++){
		p[i]=(p[i-1]*31)%modN;
	}
	make(a,ha);make(b,hb);
	for(ll i=min(a.size(),b.size());i>0;i--){
		ll h1=getHsh(ha,a.size()-i+1,a.size()),
		   h2=getHsh(hb,1,i);
		if(h1==h2){collide=i;break;}
	}
	cout<<a;
	for(ll i=collide;i<b.size();i++){cout<<b[i];}
}
