#include <stdio.h>
#define ll long long
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
bool ispr(const ll& x){
	if(x==2||x==3){return true;}
	if(x<2||!(x&1)||!(x%3)){return false;}
	if(x<=maxP){return !pr[x];}
	for(ll i=5;i*i<=x;i+=6){
		if(x%i==0||x%(i+2)==0){return false;}
	}
	return true;
}
ll n,c=0,l=0;
int main(){
	if(fopen("cau3.inp","r")){
		freopen("cau3.inp","r",stdin);
		freopen("cau3.out","w",stdout);
	}
	prSieve();
	scanf("%lld",&n);
	for(ll i=2;i*i<=n;i++){
		if(ispr(i)){
			for(ll j=i+1;j*j<=n;j++){
				if(ispr(j)){
					l=i*i+j*j;
					if(l>n){break;}
					if(ispr(l)){printf("%lld %lld %lld\n",i,j,l);c++;}
				}
			}
		}
	}
	if(!c){printf("-1");}
}

