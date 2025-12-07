#include <iostream>
using namespace std;
#define ll long long 
#define tname "hdt_502"
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}
ll n,res=0;
void sub1(){
	for(ll a=1;a<=n;a++){
		for(ll b=1;b<=n;b++){
			// ll gc=gcd(a,b);
			if((a*b)%(a+b)==0){
				// cout<<a<<" "<<b<<" "<<a*b<<" "<<a+b<<" "<<gc<<" yes\n";
				res++;
			}else{
				// cout<<a<<" "<<b<<" "<<a*b<<" "<<a+b<<" "<<gc<<" no\n";
			}
		}
	}
	cout<<res;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname"_rac.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	sub1();
	// sub2();
}

