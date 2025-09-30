#include <stdio.h>
#define ll long long 
const ll modN=14062008;
const ll maxN=100000;
ll n,k,id;
bool c[maxN+5];ll f[maxN+5];
int main(){
	scanf("%lld%lld",&n,&k);
	f[1]=1;
	while(k--){scanf("%lld",&id);c[id]=true;}
	for(ll i=2;i<=n;i++){
		if(c[i]){continue;}
		f[i]=(f[i-1]%modN+f[i-2]%modN)%modN;
	}
	printf("%lld",f[n]);
}
