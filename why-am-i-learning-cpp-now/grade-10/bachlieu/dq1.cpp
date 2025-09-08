#include <iostream>
using namespace std;
#define ll long long 
ll t,k,f[75];
void preproc(){
	ll c=2,t;f[0]=f[1]=1;
	while(c<=70){
		f[c]=f[c-1]+f[c-2];
		c++;
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	preproc();
	// for(ll i=0;i<=70;i++){cout<<f[i]<<" ";}
	cin>>t;
	while(t--){
		cin>>k;
		cout<<f[k-1]<<"\n";
	}
}
