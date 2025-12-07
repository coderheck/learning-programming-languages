#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define tname "hdt_502"
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}
ll n;
void sub1(){
	ll res=0;
	for(ll a=1;a<=n;a++){
		for(ll b=1;b<=n;b++){
			ll gc=gcd(a,b);
			if((a*b)%(a+b)==0){
				cout<<a<<" "<<b<<" "<<a*b<<" "<<a+b<<" "<<gc<<" yes\n";
				res++;
			}else{
				// cout<<a<<" "<<b<<" "<<a*b<<" "<<a+b<<" "<<gc<<" no\n";
			}
		}
	}
	cout<<res<<"\n";
}
void sub2(){
	vector<ll>d(1000005,1);
	for(ll i=2;i<=n;i++){
		for(ll j=i;j<=n;j+=i){if(d[j]==1){d[j]=i;}}
	}
	// for(ll i=1;i<=30;i++){cout<<i<<" "<<d[i]<<"\n";}
	ll res=0,mindiv=n;
	for(ll i=1;i<=n;i++){
		// for(ll j=1;j*j<=n;j++){
		// 	if(n%j==0){mindiv=j;break;}
		// }
		// if(mindiv!=d[i]){cout<<"edge: "<<i<<" "<<mindiv<<" "<<d[i]<<"\n";res++;continue;}
		mindiv=d[i];
		for(ll j=mindiv;j<=n;j+=mindiv){
			ll gc=gcd(i,j);
			if((i*j)%(i+j)==0){
				cout<<i<<" "<<j<<" "<<i*j<<" "<<i+j<<" "<<gc<<" yes\n";
				res++;
			}
		}
	}
	cout<<res;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	sub1();
	sub2();
}
