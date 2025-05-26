#include<iostream>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5],pl[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
bool plf(const ll &n){
	ll n1=n,r=0;
	while(n1!=0){r=r*10+n1%10;n1/=10;}
	return r==n;
}
ll t,l,r,c=0;
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	prSieve();
	for(ll i=1;i<=maxP;i++){pl[i]=plf(i);}
	cin>>t;
	while(t--){
		cin>>l>>r;c=0;
		for(ll i=l;i<=r;i++){
			if(!pr[i]&&pl[i]){c++;}
		}
		cout<<c<<"\n";
	}
}
