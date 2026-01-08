#include <iostream>
#include <cstring>
using namespace std;
#define ll long long 
#define tname "mathuong"
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll a,b,dp[11][2][1024],ds[11],dz=0; // 2^10 == 1<<10 == 1024
ll sol(ll pos,ll sml,ll mask){ // bitmask để lưu chữ số đã dùng
	if(pos==dz){return mask!=0;}
	if(dp[pos][sml][mask]!=-1){return dp[pos][sml][mask];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		if(mask>>d&1){continue;} // check xem chữ số đã được dùng chưa
		res+=sol(pos+1,sml&&(d==lim),(!mask&&!d)?0:mask|(1<<d));
	}
	return dp[pos][sml][mask]=res;
}
ll f(ll x){
	if(x<0){return 0;}
	if(!x){return 1;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	rvArr(ds,dz);
	memset(dp,-1,sizeof(dp));
	return sol(0,1,0);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	{cout<<f(b)-f(a-1)<<"\n";}
}

