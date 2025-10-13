#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
#define ll long long 
ll a,b,ds[10],dz=0,dp[10][2][100000]; // dp[pos][smaller][count]
ll sol(ll pos,ll sml,ll digit,ll amt){
	if(pos==dz){return dp[pos][sml][digit];}
	if(dp[pos][sml][digit]!=-1){return dp[pos][sml][digit];}

}
vector<ll> f(ll x){
	vector<ll>dc(10,0);
	if(!x){dc[0]++;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	reverse(ds,ds+dz);
	memset(dp,-1,sizeof dp);
	
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	while(cin>>a>>b){
		if(!a&&!b){return 0;}

	}
}
