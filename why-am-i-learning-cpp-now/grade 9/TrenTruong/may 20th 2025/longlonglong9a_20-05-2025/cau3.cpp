#include<iostream>
using namespace std;
#define ll long long
#define maxP 10000000
bool pr[maxP+5];ll s[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	s[0]=s[1]=0;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
void preproc(){
	for(ll i=2;i<=maxP;i++){
		s[i]=s[i-1]+!pr[i];
	}
}
ll q,l,r;
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	prSieve();preproc();
	cin>>q;
	while(q--){
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<"\n";
	}
}
