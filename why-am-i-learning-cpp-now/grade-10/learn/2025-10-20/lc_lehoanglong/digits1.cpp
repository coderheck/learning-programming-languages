#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long 
ll ds[15],dz=0,dp[15][2][100]; // dp[pos][sml][countOne]
ll sol(ll pos,ll sml,ll cne){
	if(pos==dz){return cne;}
	if(dp[pos][sml][cne]!=-1){return dp[pos][sml][cne];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		res+=sol(pos+1,sml&&d==lim,cne+(d==1));
	}
	return dp[pos][sml][cne]=res;
}
void f(ll x){
	if(x<=0){cout<<0;return;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	reverse(ds,ds+dz);
	memset(dp,-1,sizeof dp);
	cout<<sol(0,1,0);
}
ll n;
int main(){
	if(fopen("digits1.inp","r")){
		freopen("digits1.inp","r",stdin);
		freopen("digits1.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	f(n);
}
