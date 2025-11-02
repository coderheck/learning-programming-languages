// về bản chất thì đề bài khá giống với bài G - ABC300 (https://atcoder.jp/contests/abc300/tasks/abc300_g)
// tuy nhiên thì đề bài trên lại 1. có giới hạn P <= 100 và 2. chỉ tính 1 -> N, đồng thời TL là 4s (!!)
// code dưới dùng lý thuyết toán vì khó quá 💀
#include <iostream>
#define ll long long 
char pr[1000005];
ll p[2000005],prc=0;
void prSieve(ll lim){
	pr[0]=pr[1]=1;
	for(ll i=2;i*i<=lim;i++){
		if(!pr[i]){for(ll j=i*i;j<=lim;j+=i){pr[j]=1;}}
	}
	for(ll i=2;i<=lim;i++){
		if(!pr[i]){
			p[prc++]=i;
		}
	}
}
ll k,a,b,res=0,x[20000005];
int main(){
	if(fopen("amplifiers.inp","r")){
		freopen("amplifiers.inp","r",stdin);
		freopen("amplifiers_rac.out","w",stdout);
	}
	std::cin>>k>>a>>b;
	prSieve(k);
	for(ll i=0;i<=b-a;i++){x[i]=a+i;}
	for(ll i=0;i<prc;i++){
		ll l=((a+p[i]-1)/p[i])*p[i]; // số đầu tiên chia hết cho p[i]
		for(ll j=l;j<=b;j+=p[i]){
			ll idx=j-a;
			while(x[idx]%p[i]==0){x[idx]/=p[i];}
		}
	}
	for(ll i=0;i<=b-a;i++){res+=x[i]==1?1:x[i]<=k;}
	std::cout<<res;
}

