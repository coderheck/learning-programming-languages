#include <iostream>
#include <string>
using namespace std;
#define ll long long 
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
const ll maxP=9009;
bool pr[maxP+5];
void buildSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
ll t,a,expn,maxd;string s;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	buildSieve();
	cin>>t;
	while(t--){
		cin>>s;a=maxd=0;expn=10;
		for(ll i=0;i<s.size();i++){
			a+=s[i]-'0';
			maxd=max(maxd,s[i]-'0');
		}
		while(expn<=a){expn*=10;}
		a=expn*maxd+a;
		if(!pr[a]){cout<<"YES\n";}else{cout<<"NO\n";}
	}
}
