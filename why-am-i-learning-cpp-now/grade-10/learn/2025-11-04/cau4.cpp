#include<iostream>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(!b)?a:gcd(b,a%b);}
ll demcc(const ll &t){
	ll res=0;
	for(ll i=1;i*i<=t;i++){
		if(t%i==0){
			ll m=i,n=t/i;
			res+=(gcd(m,n)==1)+(m!=n&&gcd(n,m)==1);
		}
	}
	return res;
}
ll t,x,s=0;
int main(){
	if(fopen("cau4.inp","r")){
		freopen("cau4.inp","r",stdin);
		freopen("cau4.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>x;s=0;
		for(ll k=1;k*k<=x;k++){
			if(x%k==0){
				ll k1=k,k2=x/k;
				s+=demcc(x/k1+1);
				if(k1!=k2){s+=demcc(x/k2+1);}
			}
		}
		cout<<s<<"\n";
	}
}

